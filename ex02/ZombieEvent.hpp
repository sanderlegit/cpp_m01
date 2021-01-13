/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:43 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:11:23 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"

class ZombieEvent {
	public:
		ZombieEvent(void);
		~ZombieEvent(void);

		void			setZombieType(std::string type);
		Zombie			*newZombie(std::string name);
		Zombie			*randomChump(void);
	private:
		std::string		type;
};

#endif
