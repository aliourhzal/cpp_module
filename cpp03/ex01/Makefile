NAME	=	slaptrap

FILES	=	main.cpp Claptrap.cpp Scavtrap.cpp

HEADERS	=	Claptrap.hpp Scavtrap.hpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(FILES) $(HEADERS)
	c++ $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)
fclean: clean

re:	fclean all