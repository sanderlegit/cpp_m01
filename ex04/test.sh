#!/bin/bash
cd tests
if [ $1 -eq 1 ]; then
	./unit_tester_printout.sh tests
else
	./unit_tester.sh tests
fi
