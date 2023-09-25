# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/22 01:37:06 by fchanane          #+#    #+#              #
#    Updated: 2023/01/22 01:38:56 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Form

CC = c++  

CFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC =	Bureaucrat.cpp\
		Form.cpp\
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

