NAME = Bureaucrat

FILES = main.cpp Bureaucrat.cpp Form.cpp

all: $(NAME)

$(NAME): $(FILES) Bureaucrat.hpp
	c++ -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all