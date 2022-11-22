# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:39:01 by halwahed          #+#    #+#              #
#    Updated: 2022/11/22 15:39:02 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex00
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Bureaucrat.cpp

all:
	make $(NAME)

$(NAME): $(SRCS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re