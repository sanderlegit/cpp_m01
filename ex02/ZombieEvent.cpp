/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:40 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:26:07 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void) {
	std::cout << "Starting zombie event!" << std::endl;
	srand((int) time(0));
	return;
}

ZombieEvent::~ZombieEvent(void) {
	std::cout << "Ending zombie event!" << std::endl;
	return;
}

void	ZombieEvent::setZombieType(std::string type_) {
	this->type = type_;
	return;
}

Zombie	*ZombieEvent::newZombie(std::string name) {
	Zombie	*zed = new Zombie(name, this->type);

	return zed;
}

Zombie	*ZombieEvent::randomChump(void) {
	Zombie			*zed;
	std::string		name_;
	int				len;
	char			consonantsUpper[21] = {'B','C','D','F','G','H','J','K','L','M','N','P','Q','R','S','T','V','W','X','Z','Y'};
	char			consonants[21] = {'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','z','y'};
	char			vowels[5] = {'a','e','i','o','u'};

	name_ += consonantsUpper[(rand() % 21)];
	len = ((rand() % 3) + 1);
	for (int i = 0; i < len; i++) {
		name_ += vowels[(rand() % 5)];
		name_ += consonants[(rand() % 21)];
	}
	zed = new Zombie(name_, this->type);
	zed->announce();
	return zed;
}
