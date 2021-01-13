/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:04:29 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 12:49:37 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(void) {
	Pony	ponyOnTheStack = Pony("Alfred", "Sugar Cubes", 250, 19);

	ponyOnTheStack.announce();
	return;
}

void	ponyOnTheHeap(void) {
	Pony	*ponyOnTheHeap = new Pony("Heapy", "Malloced Memory", 180, 13);

	ponyOnTheHeap->announce();
	delete ponyOnTheHeap;
	return;
}

int		main(void) {
	ponyOnTheStack();
	ponyOnTheHeap();
	return (0);
}
