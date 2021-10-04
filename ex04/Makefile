# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                          e8'   8   '8e           #
#                                                      +:+                     #
#    By: averheij <averheij@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/11 15:02:04 by averheij      #+#    #+#                  #
#    Updated: 2021/10/04 15:05:14 by dries               **ee8ee**             #
#                                                                              #
# **************************************************************************** #

NAME		=	replace
CPPFILES	=	replace.cpp
OBJDIR		=	objects
OFILES		=	$(CPPFILES:%.cpp=$(OBJDIR)/%.o)
OS      	=   $(shell uname)
ifeq ($(OS),Linux)
	CC		=	g++
else
	CC		=	clang++
endif
FLAGS		=	-Wall -Werror -Wextra -std=c++98 -pedantic
FLAGS		+=	-g

all: $(NAME)

$(NAME): $(OBJDIR) $(OFILES)
	$(CC) $(FLAGS) -o $(NAME) $(OFILES)

$(OBJDIR):
	mkdir $(OBJDIR)

$(OBJDIR)/%.o: %.cpp
	$(CC) -c $< -o $@

run: all
	./test.sh $(VERBOSE)

runc: run fclean

clean:
	rm -f $(OFILES)
	rm -rf $(OBJDIR)
	rm -rf tests/*.replace

fclean: clean
	rm -f $(NAME)

re: fclean all
