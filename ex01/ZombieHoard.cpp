/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHoard.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 15:30:00 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:55:26 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHoard.hpp"

ZombieHoard::ZombieHoard(int zcount) : _size(zcount) {
	std::cout << "Zombie hoard approaching!" << std::endl;
	srand((int) time(0));
	this->_hoard = new Zombie[zcount];
	return;
}

ZombieHoard::~ZombieHoard(void) {
	std::cout << "The zombie hoard fades into the distance!" << std::endl;
	delete [] this->_hoard;
	return;
}

void	ZombieHoard::announce(void) {
	for (int i = 0; i < this->_size; i++)
		this->_hoard[i].announce();
	return;
}

