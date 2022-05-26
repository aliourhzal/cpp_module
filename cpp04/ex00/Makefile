NAME = polymorphism

FILES = main.cpp Animal.cpp Cat.cpp Dog.cpp

HEADERS= Animal.hpp Cat.hpp Dog.hpp

$(NAME) : $(FILES) $(HEADERS)
	c++  -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME) 

all : $(NAME)

clean :
	rm $(NAME)

fclean : clean

re: fclean all