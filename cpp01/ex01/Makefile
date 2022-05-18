NAME = zombie

FILE = main.cpp Zombie.cpp zombieHorde.cpp

all: $(NAME)

$(NAME): $(FILE) Zombie.hpp
	c++ -Wall -Wextra -Werror -o $(NAME) $(FILE)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all