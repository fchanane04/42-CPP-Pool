# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/11 02:47:02 by fchanane          #+#    #+#              #
#    Updated: 2023/01/11 02:47:23 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	FixedPoint

CC = c++  

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC =	main.cpp\
		Fixed.cpp\

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
