/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                        e8'   8   '8e          */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:32 by averheij      #+#    #+#                 */
/*   Updated: 2021/11/17 11:58:24 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

//Make a Weapon class, that has a type string, and a getType that returns a const reference to this string. Also has a setType.

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon {
	public:
		Weapon(std::string type_);
		~Weapon(void);

		const std::string	&getType(void) const;
		void				setType(std::string type_);
	private:
		std::string			_type;
};

#endif
