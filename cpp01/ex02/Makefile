NAME = a.out

FILE = main.cpp

all: $(NAME)

$(NAME): $(FILE)
	c++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) $(FILE)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all