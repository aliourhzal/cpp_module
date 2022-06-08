/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:32:02 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 14:37:11 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}
Intern::Intern(Intern &copy)
{
	(void) copy;
}
Intern & Intern::operator=(Intern &copy){
	(void) copy;
	return (*this);
}
Intern::~Intern(){}

const char * Intern::NoSuchFormException::what() const throw()
{
	return ("No Such Form To Fill");
}

Form * Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {"PresidentialPardonForm", "ShrubberyCreationForm", "RobotomyRequestForm"};

	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			switch (i)
			{
			case 0:
				return (new PresidentialPardonForm(target));
				break;
			case 1:
				return (new ShrubberyCreationForm(target));
				break;
			case 2:
				return (new RobotomyRequestForm(target));
				break;
			}
		}
	}
	throw (NoSuchFormException());
}
