NAME	=	bsp

FILES	=	main.cpp Fixed.cpp Point.cpp bsp.cpp

HEADERS	=	Fixed.hpp Point.hpp

FLAGS	=	-Wall -Wextra -Werror -std=c++98

all:	$(FILES) $(HEADERS)
	c++ $(FLAGS) -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)
fclean: clean

re:	fclean all