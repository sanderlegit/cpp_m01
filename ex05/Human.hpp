/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: averheij <averheij@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/01/13 16:44:53 by averheij      #+#    #+#                 */
/*   Updated: 2021/01/13 17:04:49 by averheij      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP
# include "Brain.hpp"

class Human {
	public:
		Human(void);
		~Human(void);

		std::string		identify(void) const;
		Brain			getBrain(void) const;
	private:
		const Brain		_brain;
};

#endif
