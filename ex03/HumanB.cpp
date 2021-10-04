/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:23 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/14 17:27:58 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_) : _name(name_) {
	return;
}

HumanB::~HumanB(void) {
	return;
}

void	HumanB::setWeapon(Weapon &weapon_) {
	this->_weapon = &weapon_;
	return;
}

void	HumanB::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
