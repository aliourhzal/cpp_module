NAME = iter

all: $(NAME)

$(NAME): main.cpp iter.hpp
	c++ -Wall -Werror -Wextra -std=c++98 main.cpp -o $(NAME)

clean :
	rm -f $(NAME)

fclean : clean

re: clean all