# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/24 15:04:58 by halwahed          #+#    #+#              #
#    Updated: 2022/10/25 15:53:12 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	horde

CC		=	c++

FLAG	=	-c		\
			-Wall	\
			-Wextra	\
			-Werror	\
			-Wfatal-errors \
			-std=c++98

SANIT	=	-fsanitize=address

RM		=	@/bin/rm -rf

SRCS	=	Zombie.cpp		\
			zombieHorde.cpp	\
			main.cpp
OBJS 	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(FLAG) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
