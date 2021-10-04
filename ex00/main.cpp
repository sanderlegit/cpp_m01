/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                          e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 12:59:11 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie*		newZombie( std::string name );
void		randomChump( std::string name );

void		stackZ() {
	Zombie		stackZed = Zombie("Stacky");

	stackZed.announce();
	return;
}

void		eventZ() {
	Zombie			*zed1;

	zed1 = newZombie("Steve");
	zed1->announce();

	delete zed1;
	return;
}

void		randomZ() {
	randomChump("thisexercise");
	randomChump("makesnosense");
	return;
}

int			main(void) {
	srand((int) time(0));
	std::cout << std::endl << "Zombie by constructor" << std::endl;
	stackZ();
	std::cout << std::endl << "Zombie by newZombie" << std::endl;
	eventZ();
	std::cout << std::endl << "Zombie by randomChump!" << std::endl;
	randomZ();
	return(0);
}
