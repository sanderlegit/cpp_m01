/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:04:29 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 12:22:13 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

int		main(void) {
	Pony	ponyOnTheStack = Pony("Alfred", "Sugar Cubes", 250, 19);
	Pony	*ponyOnTheHeap = new Pony("Heapy", "Malloced Memory", 180, 13);

	ponyOnTheStack.announce();
	ponyOnTheHeap->announce();

	delete ponyOnTheHeap;

	return (0); //ponyOnTheStack destructor automatically called
}
