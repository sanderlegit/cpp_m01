/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   newZombie.cpp                                     e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:40 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 12:47:03 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*newZombie(std::string name) {
	Zombie	*zed = new Zombie(name);

	return zed;
}
