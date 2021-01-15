/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileHandler.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:11:26 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/15 14:07:02 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FileHandler.hpp"

FileHandler::FileHandler(void) {
	this->_fin = new std::ifstream();
	this->_fout = new std::ofstream();
	return;
}

FileHandler::~FileHandler(void) {
	//if (this->_fin->is_open())
		//this->closeInput();
	//if (this->_fout->is_open())
		//this->closeOutput();
	//delete this->_fin;
	//delete this->_fout;
	return;
}

int				FileHandler::openInput(const char *fname) {
	this->_fin->open(fname);
	if (this->_fin->rdstate() != 0) {
		std::cerr << "FileHandler: open error '" << fname << "'" << std::endl;
		return (1);
	}
	this->_finname.append(fname);
	return (0);
}

std::string		*FileHandler::getLine(void) {
	std::string		*line = new std::string();

	getline(*this->_fin, *line);
	if (this->_fin->fail() != 0) {
		std::cerr << "FileHandler: read error: '" << this->_finname << "'" << std::endl;
		return (NULL);
	}
	this->_EOF = this->_fin->eof();
	return (line);
}

int				FileHandler::closeInput(void) {
	this->_fin->close();
	if (this->_fin->fail() != 0) {
		std::cerr << "FileHandler: close error: '" << this->_finname << "'" << std::endl;
		return (1);
	}
	return (0);
}

int				FileHandler::getEOF(void) const {
	return (this->_EOF);
}

int				FileHandler::openOutput(const char *fname) {
	this->_fout->open(fname);
	if (this->_fout->rdstate() != 0) {
		std::cerr << "FileHandler: open error: '" << fname << "'" << std::endl;
		return (1);
	}
	this->_foutname.append(fname);
	return (0);
}

int				FileHandler::writeStr(std::string *str) {
	*this->_fout << str->c_str();
	if (this->_fout->fail() != 0) {
		std::cerr << "FileHandler: write error: '" << this->_foutname << "'" << std::endl;
		return (1);
	}
	return (0);
}

int				FileHandler::closeOutput(void) {
	this->_fout->close();
	if (this->_fout->fail() != 0) {
		std::cerr << "FileHandler: close error: '" << this->_foutname << "'" << std::endl;
		return (1);
	}
	return (0);
}
