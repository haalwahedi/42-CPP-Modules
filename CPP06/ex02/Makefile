# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamdas <hamdas@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/05 16:50:36 by halwahed          #+#    #+#              #
#    Updated: 2022/12/07 02:05:31 by hamdas           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = identifier

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main 
SRC = $(addsuffix .cpp, $(addprefix ./, $(FILES)))

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all re clean fclean