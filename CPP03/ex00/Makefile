# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 16:33:52 by halwahed          #+#    #+#              #
#    Updated: 2022/11/14 16:50:59 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	claptrap

CC		=	c++

FLAG	=	-c		\
			-Wall	\
			-Wextra	\
			-Werror	\
			-Wfatal-errors \
			-std=c++98

SANIT	=	-fsanitize=address

RM		=	@/bin/rm -rf

SRCS	=	main.cpp		\
			ClapTrap.cpp
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