/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:04:32 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 12:45:03 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string n, std::string ff, int h, int a) : name(n), favoriteFood(ff), height(h), age(a) {
	std::cout << this->name << " was created." << std::endl;
	return;
}

Pony::~Pony(void) {
	std::cout << this->name << " was destroyed" << std::endl;
	return;
}

void	Pony::announce(void) {
	std::cout << "Hello! My name is " << this->name << ". I am " << this->height << "cm and " << this->age << " years old! I love eating " << this->favoriteFood << "." << std::endl;
	return;
}
