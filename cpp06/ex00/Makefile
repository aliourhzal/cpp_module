NAME = scalar

all: $(NAME)

$(NAME): main.cpp
	c++ -Wall -Wextra -Werror -std=c++98 -o $(NAME) main.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: clean all
