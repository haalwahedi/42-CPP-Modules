# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/27 13:15:32 by halwahed          #+#    #+#              #
#    Updated: 2022/11/03 15:01:40 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	fixed

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
			Fixed.cpp
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