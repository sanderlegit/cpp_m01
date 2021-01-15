/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:05:38 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/15 17:33:44 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"
#include <cstring>

int			doReplace(std::ifstream *ifs, std::ofstream *ofs, const char *s1, const char *s2) {
	std::string		*line;
	std::string		buf;
	//char			buff[8];
	int				s1len = strlen(s1);
	int				s2len = strlen(s2);
	int				pos = 0;

	line = new std::string();
	while (!ifs->eof()) {
		line->clear();
		getline(*ifs, *line);
		//std::cerr << (line->find("\n", 0) == -1) << std::endl;
		//while (line->find("\n", 0) == -1) {
			//ifs->getline(buff, 7);
			//buff[7] = '\0';
			//line->append(buff);
			//std::cerr << line->c_str() << " "<< line->find("\n", 0)  <<" "<< buff << std::endl;
			//break;
		//}

		pos = line->find(s1, 0);
			std::cerr << *line << " " << pos << std::endl;
		while (pos != -1) {
			line->replace(pos, s1len, s2);
			pos += s2len;
			std::cerr << *line << " " << pos << std::endl;
			pos = line->find(s1, pos);
		}
		*ofs << *line << std::endl;
		//ofs->write("\n", 1);
		std::cerr << "hello" << std::endl;
	}
	delete line;
	return (0);
}

int			openFiles(std::ifstream *ifs, std::ofstream *ofs, const char **argv) {
	std::string		outName;

	ifs->open(argv[1]);
	if (!ifs->is_open())
		return (1);
	outName.append(argv[1]);
	outName.append(".replace");
	ofs->open(outName.c_str());
	if (!ofs->is_open()) {
		ifs->close();
		return (1);
	}
	return (0);
}

int			exit(std::ifstream *ifs, std::ofstream *ofs, int ret) {
	ifs->close();
	ofs->close();
	return (ret);
}

int			main(int argc, const char **argv) {
	std::ifstream		ifs;
	std::ofstream		ofs;

	if (argc != 4) {
		std::cerr << "replace: invalid args: must be ./replace 'filename' 's1' 's2'" << std::endl;
		return (2);
	}
	if (strlen(argv[2]) == 0 || strlen(argv[3]) == 0) {
		std::cerr << "replace: invalid args: non zero length strings 's1' 's2'" << std::endl;
		return (2);
	}
	if (openFiles(&ifs, &ofs, argv)) {
		std::cerr << "replace: open error: '" << argv[1] << "'" << std::endl;
		return (1);
	}
	if (doReplace(&ifs, &ofs, argv[2], argv[3]))
		return (exit(&ifs, &ofs, 1));
	return (exit(&ifs, &ofs, 0));
}
