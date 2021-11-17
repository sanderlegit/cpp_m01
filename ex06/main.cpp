/* ************************************************************************** */
/*                                                                            */
/*                                                       ..eeeee..            */
/*   main.cpp                                          e8'   8   '8e          */
/*                                                    d8     8     8b         */
/*   By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8         */
/*                                                    Y8 .e* 8 *e. 8P         */
/*   Created: 2021/10/04 15:43:21 by dries             *8*   8   *8*          */
/*   Updated: 2021/11/17 12:35:46 by dries               **ee8ee**            */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int		main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./karenFilter \"LOGLEVEL\"" << std::endl;
		exit(1);
	}
	{

		std::string		complaintsStr[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
		std::string		complaintLevelStr(argv[1]);
		int				log_level_limit = 4;

		for (int i = 0; i <= 4; i++) {
			if (complaintLevelStr.compare(complaintsStr[i]) == 0) {
				log_level_limit = i;
				break;
			}
			if (i == 4)
				log_level_limit = 4;
		}

		Karen	k;

		switch (log_level_limit) {
			case 0:
				k.complain("DEBUG");
			case 1:
				k.complain("INFO");
			case 2:
				k.complain("WARNING");
			case 3:
				k.complain("ERROR");
				break;
			case 4:
				std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		}
	}
}
