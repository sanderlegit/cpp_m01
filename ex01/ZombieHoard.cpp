/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHoard.cpp                                   e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 15:30:00 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 13:25:23 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name) {
	srand((int) time(0));
	std::cout << "Zombie hoard approaching!" << std::endl;
	(void)name;
	return new Zombie[N];
}


