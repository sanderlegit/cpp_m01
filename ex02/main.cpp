/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 14:00:50 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

void	stackZ() {
	std::cout << std::endl << "A wild Zed appeared (on the stack)!" << std::endl;
	Zombie		stackZed = Zombie("Stacky", "Crawler");

	stackZed.announce();
	return;
}

void	eventZ() {
	ZombieEvent		ambush = ZombieEvent();
	Zombie			*zed1;
	Zombie			*zed2;


	std::cout << std::endl << "Starting zombie event! AMBUSH!" << std::endl;

	ambush.setZombieType("Runner");
	zed1 = ambush.newZombie("Steve");
	zed1->announce();

	ambush.setZombieType("Bloater");
	zed2 = ambush.newZombie("Alberto");
	zed2->announce();

	delete zed1;
	delete zed2;
}

void	randomZ() {
	ZombieEvent		highway = ZombieEvent();
	Zombie			*random1;
	Zombie			*random2;

	std::cout << std::endl << "Starting zombie event! Highway!" << std::endl;

	highway.setZombieType("Shambler");
	random1 = highway.randomChump();
	random2 = highway.randomChump();

	delete random1;
	delete random2;
}

int		main(void) {
	stackZ();
	eventZ();
	randomZ();
}
