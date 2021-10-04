/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:27 by averheij      #+#    #+#                 */
/*   Updated: 2021/10/04 13:19:55 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <stdlib.h>

class Zombie {
	public:
		Zombie();
		Zombie(std::string name_);
		~Zombie(void);

		void			announce(void);
	private:
		std::string		_name;
};

#endif
