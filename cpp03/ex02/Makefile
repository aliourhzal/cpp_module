NAME	=	fragtrap

FILES	=	main.cpp Claptrap.cpp Scavtrap.cpp Fragtrap.cpp

HEADERS	=	Claptrap.hpp Scavtrap.hpp Fragtrap.hpp

all:	$(NAME)

$(NAME): $(FILES) $(HEADERS)
	c++ -Wall -Wextra -Werror -std=c++98 $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)
fclean: clean

re:	fclean all