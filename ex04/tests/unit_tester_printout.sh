#!/bin/bash
# Unit tester for ANYTHING!!

RESET="\033[0m"

BLACK="\033[1m\033[30m"
RED="\033[1m\033[31m"
GREEN="\033[1m\033[32m"
YELLOW="\033[1m\033[33m"
BLUE="\033[1m\033[34m"
MAGENTA="\033[1m\033[35m"
CYAN="\033[1m\033[36m"
WHITE="\033[1m\033[37m"

make -C ../ > /dev/null

cleanup() {
	if [ "$FILESTATE_SET" -eq 0 ]; then
		ls > .filestate_before
		FILESTATE_SET=1
	else
		ls > .filestate_after
		FILESTATE_DIFF=$(diff .filestate_before .filestate_after | grep ">" | sed "s|> ||g" | tr '\n' ' ')
		rm $FILESTATE_DIFF .filestate_before .filestate_after
	fi
}

BINARY_PATH=../
BINARY=replace

#$1 = color, ${@:2} is string
printf_color() {
	1>&2 printf $1
	printf "${@:2}"
	1>&2 printf $RESET
}

echo_color() {
	1>&2 printf $1
	echo "$2"
	echo "$3"
	1>&2 printf $RESET
}

parse_options() {
	CAT=0
	for var in $@; do
		if [ "$var" = "-e" ]; then
			CAT=1
		fi
	done
}

get_test() {
	if ! [ -f "${BINARY_PATH}${BINARY}" ]; then
		printf "${RED}ERROR${RESET}: Binary path doesn't contain '${BINARY}' executable\nBinary path is currently set to: \"${BINARY_PATH}\"\nChange the BINARY_PATH variable in the script to set the path\n"
		exit 1
	fi
	PASS=0
	FAIL=0
	for var in $@; do
		if [ "${var::1}" = "-" ]; then
			continue
		fi
		if [ ! -f "$var" ]; then
			printf "File '$var' does not exist\n"
			continue
		fi
		while IFS= read -r line; do
			run_test $line
		done < "$var"
	done
	echo ----- Finished Tests -----
	printf "\nPassed = "
	echo $PASS
	printf "\nFailed = "
	echo $FAIL
}

run_test() {
	FLAG=0
	SFILE=$(echo "$line" | awk '{print $1}')
	SFIND=$(echo "$line" | awk '{print $2}')
	SREPLACE=$(echo "$line" | awk '{print $3}')
	EXPECTED=$(sed "s/$SFIND/$SREPLACE/g" $SFILE)
	$(${BINARY_PATH}${BINARY} $line 2>/dev/null)
	RESULT=$(cat "$SFILE.replace")
	if [ "$RESULT" = "$EXPECTED" ]; then
		printf_color $GREEN "[OK]"
		let PASS++
	else
		printf_color $RED "[KO]"
		let FAIL++
	fi
	echo " "$line
	echo "	File:"
	cat $SFILE
	echo "	Your replace:"
	echo "$RESULT"
	echo "	Sed:"
	echo "$EXPECTED"
	if [ "$RESULT" != "$EXPECTED" ]; then
		FLAG=1
		if [ "$CAT" = 1 ]; then
			echo_color $RED "Your output :" "$(echo $RESULT | cat -e)"
		else
			echo_color $RED "Your output :" "$(echo $RESULT)"
		fi
		if [ "$CAT" = 1 ]; then
			echo_color $GREEN "Correct output :" "$(echo $EXPECTED | cat -e)"
		else
			echo_color $GREEN "Correct output :" "$(echo $EXPECTED)"
		fi
	fi
	if [ $FLAG -eq 1 ]; then
		printf_color $YELLOW '\n %s NEW CMD %s\n\n' '---' '---'
		sleep 0.1
	fi
}

if [ $# -eq 0 ]; then
	printf "${RED}ERROR${RESET}: Please provide atleast one argument\nUsage: ./unit_tester.sh <TEST_FILES>... [OPTIONS]\n"
	exit 1
fi

parse_options $@

FILESTATE_SET=0
#cleanup
get_test $@
#cleanup
