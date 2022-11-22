# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halwahed <halwahed@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/22 15:50:42 by halwahed          #+#    #+#              #
#    Updated: 2022/11/22 15:50:42 by halwahed         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ex03
CXX			=	c++
RM			=	rm -f
CXXFLAGS	=	-Wall -Wextra -Werror -std=c++98

SRCS		= 	main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

all: $(NAME)

${NAME}: $(SRCS)
	${CXX} ${CXXFLAGS} -o ${NAME} ${SRCS}

clean:
		rm -rf $(NAME)

fclean:			clean
				@rm -rf $(NAME)

re:				fclean all

.PHONY:			all clean fclean re