# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/14 03:44:20 by fchanane          #+#    #+#              #
#    Updated: 2023/04/14 03:44:23 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	PmergeMe

OBJ = $(SRC:.cpp=.o)

CC = c++  

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC = main.cpp\
	  PmergeMe.cpp\


$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CPPFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
