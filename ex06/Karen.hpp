/* ************************************************************************** */
/*                                                                            */
/*                                                       ..eeeee..            */
/*   Karen.hpp                                         e8'   8   '8e          */
/*                                                    d8     8     8b         */
/*   By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8         */
/*                                                    Y8 .e* 8 *e. 8P         */
/*   Created: 2021/10/04 15:25:38 by dries             *8*   8   *8*          */
/*   Updated: 2021/11/17 12:33:26 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP
#include <iostream>

#define member_call_m(object,ptrToMember)  ((object).*(ptrToMember))

class Karen {
	public:
	Karen(void) ;
	~Karen(void);

	void			complain(std::string level);
	private:
	typedef	void 	(Karen::*complaint_f)(void);
	void			debug(void);
	void			info(void);
	void			warning(void);
	void			error(void);
};


#endif
