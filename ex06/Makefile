# **************************************************************************** #
#                                                                              #
#                                                        ..eeeee..             #
#    Makefile                                          e8'   8   '8e           #
#                                                     d8     8     8b          #
#    By: dries <sanderlegit@gmail.com>                8!   .dWb.   !8          #
#                                                     Y8 .e* 8 *e. 8P          #
#    Created: xxxx/xx/xx xx:xx:xx by dries             *8*   8   *8*           #
#    Updated: 2021/10/05 12:03:51 by dries               **ee8ee**             #
#                                                                              #
# **************************************************************************** #

EXERCISE	=	karenFilter
SOURCE 		=	main.cpp Karen.cpp
OBJDIR		=	objects
OFILES		=	$(SOURCE:%.cpp=$(OBJDIR)/%.o)

DFLAGS		=
ifeq ($(F), 1)
	DFLAGS += -fsanitize=address
endif
ifeq ($(G), 1)
	DFLAGS += -g
endif
FTFLAGS		=	-Wall -Wextra -Werror
CFLAGS		=	-pedantic -std=c++98 $(DFLAGS)
CXX			=	clang++


all: $(EXERCISE)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
ifeq ($(NO_FT), 1)
	$(CXX) $(CFLAGS) -c $< -o $@ $(INCL)
else
	$(CXX) $(FTFLAGS) $(CFLAGS) -c $< -o $@ $(INCL)
endif

$(EXERCISE): $(OBJDIR) $(OFILES)
	$(CXX) $(OFILES) -o $(EXERCISE) $(INCL)

clean:
	rm -rf $(OFILES)
	rm -rf $(OBJDIR)

fclean: clean
	rm -rf $(EXERCISE)

run: all
	./$(EXERCISE) "DEBUG"
	./$(EXERCISE) "INFO"
	./$(EXERCISE) "WARNING"
	./$(EXERCISE) "ERROR"
	./$(EXERCISE) "BLAHBLAH"
	-./$(EXERCISE) 
	-./$(EXERCISE) 1 2
	-./$(EXERCISE) 1 

runc: all run fclean

re: fclean all
