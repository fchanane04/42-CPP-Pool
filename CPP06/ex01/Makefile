# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/24 02:46:10 by fchanane          #+#    #+#              #
#    Updated: 2023/01/24 21:00:46 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Serialization

CC = c++  

CFLAGS	=  -Wall -Wextra -Werror -std=c++98 #-fsanitize=address -g3

RM		=	rm -f

SRC =	Serialization.cpp\
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
