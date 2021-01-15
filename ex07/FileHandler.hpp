/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FileHandler.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/15 12:11:28 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/15 13:53:45 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEHANDLER_HPP
#define FILEHANDLER_HPP
# include <iostream>
# include <fstream>
# include <string>

//https://www.cplusplus.com/reference/fstream/ifstream/ifstream/
//https://cplusplus.com/reference/ios/ios/fail/
//https://www.cplusplus.com/reference/ios/ios/rdstate/

class FileHandler {
	public:
		FileHandler(void);
		~FileHandler(void);

		int				openInput(const char *fname);
		std::string		*getLine(void);
		int				closeInput(void);
		int				getEOF(void) const;
		int				openOutput(const char *fname);
		int				writeStr(std::string *str);
		int				closeOutput(void);
	private:
		std::ifstream	*_fin;
		std::string		_finname;
		std::ofstream	*_fout;
		std::string		_foutname;
		int				_EOF;

};

#endif
