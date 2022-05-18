NAME = phonebook

HEADER = PhoneBook.hpp Contact.hpp

FILE = main.cpp FuncDef.cpp

all: $(NAME)

$(NAME): $(HEADER) $(FILE)
	c++ -Wall -Wextra -Werror $(FILE) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all