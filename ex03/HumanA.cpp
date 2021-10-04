/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:15 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/14 17:27:15 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name_, Weapon &weapon_) : _name(name_),_weapon(weapon_) {
	return;
}

HumanA::~HumanA(void) {
	return;
}

void	HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his ";
	std::cout << this->_weapon.getType() << std::endl;
}
