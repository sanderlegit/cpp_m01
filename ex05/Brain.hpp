/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 16:44:33 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:05:36 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <sstream>

class Brain {
	public:
		Brain(void);
		~Brain(void);

		std::string		identify(void) const;
	private:
		std::string		_address;
};

#endif
