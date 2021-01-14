/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 17:07:26 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/14 17:28:04 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//Now, create two classes, HumanA and HumanB, that both have a Weapon, a name, and an attack() function that displays something like:
//NAME attacks with his WEAPON_TYPE
//Make it so the following code produces attacks with "crude spiked club" THEN "some other type of club", in both test cases:

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>

class HumanB {
	public:
		HumanB(std::string name_);
		~HumanB(void);

		void		setWeapon(Weapon &weapon_);
		void		attack(void) const;
	private:
		Weapon		*_weapon;
		std::string	_name;
};

#endif
