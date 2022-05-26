NAME = polymorphism

FILES = *.cpp

HEADERS= *.hpp

$(NAME) : $(FILES) $(HEADERS)
	c++  -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME) 

all : $(NAME)

clean :
	rm $(NAME)

fclean : clean

re: fclean all