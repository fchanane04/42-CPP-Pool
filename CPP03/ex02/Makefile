# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/18 00:16:17 by fchanane          #+#    #+#              #
#    Updated: 2023/01/20 22:06:20 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	FragTrap

CC = c++  

CFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC =	ClapTrap.cpp\
		ScavTrap.cpp\
		FragTrap.cpp\
		main.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
