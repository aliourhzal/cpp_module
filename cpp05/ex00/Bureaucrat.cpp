/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:30:35 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 12:10:20 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string _name, int _grade) : name(_name)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	grade = _grade;
}

Bureaucrat & Bureaucrat::operator = (const Bureaucrat & copy)
{
	*const_cast<std::string *>(&name) = copy.getName();
	grade = copy.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat & copy) : name(copy.getName()), grade(copy.getGrade())
{
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::incrementGrade()
{
	if (grade == 1)
		throw GradeTooHighException();
	grade -= 1;
}

void	Bureaucrat::decrementGrade()
{
	if (grade == 150)
		throw GradeTooLowException();
	grade += 1;
}

std::string Bureaucrat::getName() const 
{
	return (this->name);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

const char * Bureaucrat::GradeTooHighException::what () const throw ()
{
	return "Too High";
}

const char * Bureaucrat::GradeTooLowException::what () const throw ()
{
	return "Too Low";
}

std::ostream & operator << (std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (out);
}
