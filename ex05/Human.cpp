/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 16:44:44 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:05:22 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void) {
	return;
}

Human::~Human(void) {
	return;
}

Brain	Human::getBrain(void) const {
	return (this->_brain);
}

std::string		Human::identify(void) const {
	return (this->_brain.identify());
}
