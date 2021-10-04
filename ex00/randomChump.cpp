/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   randomChump.cpp                                   e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:40 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 12:59:40 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name) {
	std::string		name_;
	int				len;
	char			consonantsUpper[21] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z','Y'};
	char			consonants[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','y'};
	char			vowels[5] = {'a','e','i','o','u'};

	(void)name;
	name_ += consonantsUpper[(rand() % 21)];
	len = ((rand() % 3) + 1);
	for (int i = 0; i < len; i++) {
		name_ += vowels[(rand() % 5)];
		name_ += consonants[(rand() % 21)];
	}

	Zombie			zed(name_);
	zed.announce();
}
