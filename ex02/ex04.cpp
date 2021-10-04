/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                          e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 15:59:38 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 13:47:16 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << &str << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
