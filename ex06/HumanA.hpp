/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:20 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/14 17:27:24 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and an attack() function that displays something like:
//NAME attacks with his WEAPON_TYPE
//Make it so the following code produces attacks with "crude spiked club" THEN "some other type of club", in both test cases:

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanA {
	public:
		HumanA(std::string name_, Weapon &weapon_);
		~HumanA(void);

		void		attack(void) const;
	private:
		Weapon		&_weapon;
		std::string	_name;
};

#endif
