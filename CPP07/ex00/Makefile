# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <fchanane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/25 03:07:20 by fchanane          #+#    #+#              #
#    Updated: 2023/01/25 11:39:18 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	Whatever

OBJ = $(SRC:.cpp=.o)

CC = c++  

CPPFLAGS	=  -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC = main.cpp\

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
