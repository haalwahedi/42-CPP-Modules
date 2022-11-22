# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:53 by halwahed          #+#    #+#              #
#    Updated: 2022/11/21 16:41:11 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf
SANIT	=	-fsanitize=address
NAME = main

FILES = WrongAnimal.cpp WrongCat.cpp Animal.cpp Cat.cpp Dog.cpp main.cpp 

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(FILES)

run:
	./$(NAME)

clean:
	$(RM) $(NAME)
	
fclean	:	clean
		@$(RM) $(NAME)
re: clean all
