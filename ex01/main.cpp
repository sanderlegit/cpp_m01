/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:58:06 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ZombieHoard.hpp"

void	hoardHeap() {
	ZombieHoard		*ambush = new ZombieHoard(7);
	ambush->announce();
	delete ambush;
	return;
}

void	hoardStack() {
	ZombieHoard		highway = ZombieHoard(9);
	highway.announce();
	return;
}

int		main(void) {
	std::cout << std::endl << "A wild Hoard appeared (on the heap)!" << std::endl;
	hoardHeap();
	std::cout << std::endl << "A wild Hoard appeared (on the stack)!" << std::endl;
	hoardStack();
	return (0);
}
