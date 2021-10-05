/* ************************************************************************** */
/*                                                                            */
/*                                                       ..eeeee..            */
/*   main.cpp                                          e8'   8   '8e          */
/*                                                    d8     8     8b         */
/*   By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8         */
/*                                                    Y8 .e* 8 *e. 8P         */
/*   Created: 2021/10/04 15:43:21 by dries             *8*   8   *8*          */
/*   Updated: 2021/10/05 11:42:09 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(void) {
	Karen	k;

	k.complain("DEBUG");
	k.complain("INFO");
	k.complain("WARNING");
	k.complain("ERROR");
	k.complain("NOTHING");
}
