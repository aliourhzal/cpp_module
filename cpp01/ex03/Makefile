NAME = war

FILES = HumanA.cpp HumanB.cpp main.cpp Weapon.cpp

HEADERS = HumanA.hpp HumanB.hpp Weapon.hpp

all: $(NAME)

$(NAME): $(FILES) $(HEADERS)
	c++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all