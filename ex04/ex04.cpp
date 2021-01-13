/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 15:59:38 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 16:01:39 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int		main(void) {
	std::string		str = "HI THIS IS BRAIN";
	std::string		*strPtr = &str;
	std::string		&strRef = str;

	std::cout << *strPtr << std::endl;
	std::cout << strRef << std::endl;
}
