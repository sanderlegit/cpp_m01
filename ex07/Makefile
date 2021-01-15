# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/11 15:02:04 by averheij      #+#    #+#                  #
#    Updated: 2021/01/15 13:33:32 by averheij      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME		=	replace
CPPFILES	=	replace.cpp FileHandler.cpp
OBJDIR		=	objects
OFILES		=	$(CPPFILES:%.cpp=$(OBJDIR)/%.o)
OS      	=   $(shell uname)
ifeq ($(OS),Linux)
	CC		=	g++
else
	CC		=	clang++
endif
FLAGS		=	-Wall -Werror -Wextra
FLAGS		+=	-g

all: $(NAME)

$(NAME): $(OBJDIR) $(OFILES)
	$(CC) $(FLAGS) -o $(NAME) $(OFILES)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CC) -c $< -o $@

clean:
	rm $(OFILES)

fclean: clean
	rm -rf $(OBJDIR)
	rm $(NAME)

re: fclean all

test: all
	@echo "\n\t\t!TEST"
	@echo "\tCorrect: All arguments as one string, All alpha uppercase\n"
	cd tests;
	./unit_tester.sh
