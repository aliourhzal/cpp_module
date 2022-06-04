NAME = span

FILES = main.cpp Span.cpp

all: $(NAME)

$(NAME): $(FILES) Span.hpp
	c++ -Wall -Werror -Wextra -o $(NAME) $(FILES)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all