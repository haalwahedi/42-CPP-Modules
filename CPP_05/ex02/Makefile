# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:46:12 by halwahed          #+#    #+#              #
#    Updated: 2022/11/22 15:46:14 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex02
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp

all: $(NAME)

${NAME}: $(SRCS)
	${CXX} ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re