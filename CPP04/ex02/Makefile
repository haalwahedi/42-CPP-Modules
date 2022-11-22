# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:53 by halwahed          #+#    #+#              #
#    Updated: 2022/11/21 16:42:18 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SANIT	=	-fsanitize=address
RM = rm -rf
NAME = abstract

FILES = AAnimal.cpp Cat.cpp Dog.cpp main.cpp Brain.cpp

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