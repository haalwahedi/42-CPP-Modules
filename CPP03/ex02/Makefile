# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamdas <hamdas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:37:57 by halwahed          #+#    #+#              #
#    Updated: 2022/11/14 15:48:15 by hamdas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fragtrap

CC		=	c++

FLAG	=	-c		\
			-Wall	\
			-Wextra	\
			-Werror	\
			-Wfatal-errors \
			-std=c++98

SANIT	=	-fsanitize=address

RM		=	@/bin/rm -rf

SRCS	=	main.cpp	\
			ClapTrap.cpp \
			ScavTrap.cpp \
			FragTrap.cpp
OBJS 	=	$(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SANIT) -o $@ $^

$(OBJS): $(SRCS)
	$(CC) $(FLAG) -c $(SRCS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re