/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                          e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 13:25:00 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie		*zombieHorde(int N, std::string name);

int		main(void) {
	int			N = 10;
	Zombie		*zed = zombieHorde(N, "invalid");

	for (int i = 0; i < N; i++)
		zed[i].announce();

	delete [] zed;
	return (0);
}
