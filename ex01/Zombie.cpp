/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:58:28 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_, std::string type_) : _name(name_), _type(type_) {
	std::cout << "Zombie " << this->_name << " was created." << std::endl;
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
	this->_type = "Hoard Zombie";
	std::cout << "Zombie " << this->_name << " was created." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " was deleted." << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
	return;
}
