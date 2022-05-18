# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 17:05:05 by aourhzal          #+#    #+#              #
#    Updated: 2022/05/17 17:06:32 by aourhzal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = zombie

FILE = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

all: $(NAME)

$(NAME): $(FILE)
	c++ -Wall -Wextra -Werror $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all