NAME	=	scavtrap

FILES	=	main.cpp Claptrap.cpp Scavtrap.cpp

HEADERS	=	Claptrap.hpp Scavtrap.hpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(NAME)

$(NAME): $(FILES) $(HEADERS)
	c++ -Wall -Wextra -Werror -std=c++98 $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)
fclean: clean

re:	fclean all