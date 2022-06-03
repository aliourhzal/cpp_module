NAME = Bureaucrat

FILES = main.cpp Bureaucrat.cpp Form.cpp

HEADERS = Bureaucrat.hpp Form.hpp ShrubberyCreationForm.hpp PresidentialPardonForm.hpp RobotomyRequestForm.hpp

all: $(NAME)

$(NAME): $(FILES) $(HEADERS)
	g++ -Wall -Wextra -Werror -std=c++98 $(FILES) -o $(NAME)

clean:
	rm -f $(NAME)

fclean: clean

re: clean all