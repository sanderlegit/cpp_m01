/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 12:04:35 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 12:45:08 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>

class Pony {
	public:
		std::string		name;
		std::string		favoriteFood;
		int				height;
		int				age;

		Pony(std::string n, std::string ff, int h, int a);
		~Pony(void);

		void	announce(void);
};

#endif
