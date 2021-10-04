/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHoard.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 15:30:03 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:11:37 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHOARD_HPP
# define ZOMBIEHOARD_HPP
# include <iostream>
# include <stdlib.h>
# include <time.h>
# include "Zombie.hpp"

class ZombieHoard {
	public:
		ZombieHoard(int zcount);
		~ZombieHoard(void);

		void		announce(void);
	private:
		Zombie		*_hoard;
		int			_size;
};

#endif
