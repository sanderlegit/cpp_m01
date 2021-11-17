/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:30 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/17 11:58:28 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_) : _type(type_) {
	return;
}

Weapon::~Weapon(void) {
	return;
}

const std::string	&Weapon::getType(void) const {
	return (this->_type);
}

void				Weapon::setType(std::string type_) {
	this->_type = type_;
	return;
}
