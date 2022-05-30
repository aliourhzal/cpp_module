# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 17:05:05 by aourhzal          #+#    #+#              #
#    Updated: 2022/05/28 14:31:50 by aourhzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(FILE)
	c++ -Wall -Wextra -Werror -std=c++98 $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all