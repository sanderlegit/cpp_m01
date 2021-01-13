/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 13:01:27 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 15:45:46 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie {
	public:
		Zombie(std::string name_, std::string type_);
		Zombie(void);
		~Zombie(void);

		void			announce(void);
	private:
		std::string		_name;
		std::string		_type;
};

#endif
