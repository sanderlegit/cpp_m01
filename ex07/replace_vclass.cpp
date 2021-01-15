/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:05:38 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/15 13:51:35 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <cstring>
#include <stdio.h>

std::string	*str2upper(const char *str)
{
	std::string		*ret = new std::string;
	while (*str)
	{
		ret += std::toupper(*str);
		str++;
	}
	return (ret);
}

int			doReplace(FileHandler *file, const char *s1, const char *s2) {
	std::string		*line;
	int				s1len = strlen(s1);
	int				s2len = strlen(s2);
	int				pos = 0;

	while (!file->getEOF()) {
		line = file->getLine();
		if (!line)
			return (1);
		while (pos > 0) {
			pos = line->find(s1, pos);
			line->replace(pos, s1len, s2);
			pos += s2len;
		}
		if (file->writeStr(line)) {
			delete line;
			return (1);
		}
		delete line;
	}
	return (0);
}

int		openFiles(FileHandler *file, const char **argv) {
	std::string		*outName;

	file = new FileHandler();
	if (file->openInput(argv[1]));
		return (1);
	outName = str2upper(argv[1]);
	outName->append(".replace");
	if (file->openOutput(outName->c_str())) {
		delete outName;
		return (1);
	}
	delete outName;
	return (0);
}

int		main(int argc, const char **argv) {
	FileHandler		*file;
	int				ci;
	int				co;

	if (argc != 4) {
		std::cerr << "replace: invalid args: must be ./replace 'filename' 's1' 's2'" << std::endl;
		return (2);
	}
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0) {
		std::cerr << "replace: invalid args: non zero length strings 's1' 's2'" << std::endl;
		return (2);
	}
	if (openFiles(file, argv)) {
		delete file;
		return (1);
	}
	if (doReplace(file, argv[2], argv[3])) {
		delete file;
		return (1);
	}
	ci = file->closeInput();
	co = file->closeOutput();
	delete file;
	if (ci || co)
		return (1);
	return (0);
}
