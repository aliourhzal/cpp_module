NAME = a.out

FILES = main.cpp Fixed.cpp

all: $(NAME)

$(NAME): $(FILES)
	c++ -Wall -Werror -Wextra -std=c++98 $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all