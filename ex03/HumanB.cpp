/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:23 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 14:31:45 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_) : _name(name_), _weapon(NULL) {
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
	if (_weapon)
		std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
	else
		std::cout << this->_name << " is unarmed." << std::endl;
}
