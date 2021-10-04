/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 12:47:36 by dries               **ee8ee**            */
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
