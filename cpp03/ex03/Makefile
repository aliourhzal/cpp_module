NAME	=	DiamondTrap

FILES	=	main.cpp Claptrap.cpp Scavtrap.cpp Fragtrap.cpp DiamondTrap.cpp

HEADERS	=	Claptrap.hpp Scavtrap.hpp Fragtrap.hpp DiamondTrap.hpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(FILES) $(HEADERS)
	c++ $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)
fclean: clean

re:	fclean all