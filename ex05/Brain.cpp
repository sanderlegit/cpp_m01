/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 16:44:29 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:05:31 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::stringstream	str;

	str << this;
	this->_address = str.str();
	return;
}

Brain::~Brain(void) {
	return;
}

std::string		Brain::identify(void) const {
	return (this->_address);
}
