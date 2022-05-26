NAME = Bureaucrat

FILES = main.cpp Bureaucrat.cpp

all: $(NAME)

$(NAME): $(FILES) Bureaucrat.hpp
	g++ -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all