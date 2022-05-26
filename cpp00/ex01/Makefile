NAME = phonebook

HEADER = PhoneBook.hpp Contact.hpp

FILE = main.cpp Phonebook.cpp Contact.cpp

all: $(NAME)

$(NAME): $(HEADER) $(FILE)
	c++ -Wall -Wextra -Werror -std=c++98 $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all