/* ************************************************************************** */
/*                                                                            */
/*                                                       ..eeeee..            */
/*   Karen.cpp                                         e8'   8   '8e          */
/*                                                    d8     8     8b         */
/*   By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8         */
/*                                                    Y8 .e* 8 *e. 8P         */
/*   Created: 2021/10/04 15:25:57 by dries             *8*   8   *8*          */
/*   Updated: 2021/11/17 12:33:30 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include <functional>
#include "Karen.hpp"

Karen::Karen(void) {}

Karen::~Karen(void) {}

void	Karen::complain(std::string level) {
	complaint_f		complaints[4] = {&Karen::debug, &Karen::info,
		&Karen::warning, &Karen::error};
	std::string		complaintsStr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++) {
		if (level.compare(complaintsStr[i]) == 0) {
			member_call_m(*this, complaints[i])();
			return;
		}
	}
}

void	Karen::debug(void) {
	std::cout << "*DEBUG* I love to get extra bacon for my\
7XL-double-cheese-triple-pickle-special-ketchup burger. I just love\
it!" << std::endl;
}

void	Karen::info(void) {
	std::cout << "*INFO* I cannot believe adding extra bacon cost more\
money. You dont put enough! If you did I would not have to ask for\
it!" << std::endl;
}

void	Karen::warning(void) {
	std::cout << "*WARNING* I think I deserve to have some extra bacon for\
free. Ive been coming here for years and you just started working here\
last month." << std::endl;
}

void	Karen::error(void) {
	std::cout << "*ERROR* This is unacceptable, I want to speak to the manager\
" << std::endl;
}
