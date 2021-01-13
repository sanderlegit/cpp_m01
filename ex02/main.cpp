/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:51:05 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieEvent.hpp"

void	stackZ() {
	Zombie		stackZed = Zombie("Stacky", "Crawler");

	stackZed.announce();
	return;
}

void	eventZ() {
	ZombieEvent		ambush = ZombieEvent();
	Zombie			*zed1;
	Zombie			*zed2;

	ambush.setZombieType("Runner");
	zed1 = ambush.newZombie("Steve");
	zed1->announce();

	ambush.setZombieType("Bloater");
	zed2 = ambush.newZombie("Alberto");
	zed2->announce();

	delete zed1;
	delete zed2;
	return;
}

void	randomZ() {
	ZombieEvent		highway = ZombieEvent();
	Zombie			*random1;
	Zombie			*random2;

	highway.setZombieType("Shambler");
	random1 = highway.randomChump();
	random2 = highway.randomChump();

	delete random1;
	delete random2;
	return;
}

int		main(void) {
	std::cout << std::endl << "A wild Zed appeared (on the stack)!" << std::endl;
	stackZ();
	std::cout << std::endl << "AMBUSH!" << std::endl;
	eventZ();
	std::cout << std::endl << "Random Event!" << std::endl;
	randomZ();
	return(0);
}
