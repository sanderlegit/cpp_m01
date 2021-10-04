/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 13:24:42 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_) : _name(name_) {
	std::cout << "Zombie " << this->_name << " was created." << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " was deleted." << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << "> Braiiiiiiinnnssss..." << std::endl;
	return;
}

Zombie::Zombie(void) {
	int				len;
	char			consonantsUpper[21] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z','Y'};
	char			consonants[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','y'};
	char			vowels[5] = {'a','e','i','o','u'};

	this->_name += consonantsUpper[(rand() % 21)];
	len = ((rand() % 3) + 1);
	for (int i = 0; i < len; i++) {
		this->_name  += vowels[(rand() % 5)];
		this->_name += consonants[(rand() % 21)];
	}
	std::cout << "Zombie " << this->_name << " was created." << std::endl;
}
