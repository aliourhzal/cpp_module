NAME = harlFilter

FILES = main.cpp harl.cpp

all: $(NAME)

$(NAME): $(FILES)
	c++ -Wall -Werror -Wextra $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all