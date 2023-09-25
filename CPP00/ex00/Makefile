# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/30 18:32:50 by fchanane          #+#    #+#              #
#    Updated: 2023/01/02 22:06:41 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	megaphone

CC = g++  

CFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC =	megaphone.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
