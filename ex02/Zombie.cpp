/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:54:21 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_, std::string type_) : _name(name_), _type(type_) {
	std::cout << "Zombie " << this->_name << " was created." << std::endl;
	return;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->_name << " was deleted." << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
	return;
}
