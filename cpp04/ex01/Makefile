NAME = polymorphism

FILES = Animal.cpp Brain.cpp Cat.cpp Dog.cpp main.cpp

HEADERS= Animal.hpp Brain.hpp Cat.hpp Dog.hpp

$(NAME) : $(FILES) $(HEADERS)
	c++  -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME) 

all : $(NAME)

clean :
	rm $(NAME)

fclean : clean

re: fclean all