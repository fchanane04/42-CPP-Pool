# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/03 15:45:53 by fchanane          #+#    #+#              #
#    Updated: 2023/01/09 22:00:24 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Moarbrainz

CC = c++  

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC =	Zombie.cpp\
		ZombieHorde.cpp\
		main.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
