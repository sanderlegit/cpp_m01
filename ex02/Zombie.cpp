/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:24 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 13:55:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name_, std::string type_) : name(name_), type(type_) {
	std::cout << "Zombie " << this->name << " was created." << std::endl;
}

Zombie::~Zombie(void) {
	std::cout << "Zombie " << this->name << " was deleted." << std::endl;
	return;
}

void	Zombie::announce(void) {
	std::cout << "<" << name << " (" << type << ")> Braiiiiiiinnnssss..." << std::endl;
	return;
}
