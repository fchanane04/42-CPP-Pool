# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fchanane <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 20:51:53 by fchanane          #+#    #+#              #
#    Updated: 2023/04/11 20:51:54 by fchanane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	btc

OBJ = $(SRC:.cpp=.o)

CC = c++  

CPPFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		=	rm -f

SRC = main.cpp\
	  BitcoinExchange.cpp\

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	@$(RM) $(OBJ)

fclean: clean
	@$(RM) $(NAME)

re: fclean all
