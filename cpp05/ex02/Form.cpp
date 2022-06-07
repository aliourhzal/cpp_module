/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 21:47:15 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 13:12:49 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

std::string Form::getName() const
{
	return (name);
}
bool Form::getSign() const
{
	return (sign);
}
int Form::getGS() const
{
	return (gradeRequiredSign);
}
int Form::getGE() const
{
	return (gradeRequiredExec);
}

Form::Form(std::string Name, int gradeS, int gradeE) : name(Name), gradeRequiredSign(gradeS), gradeRequiredExec(gradeE)
{
	sign = false;
	if (gradeS > 150)
		throw (Form::GradeTooLowException());
	else if (gradeS < 1)
		throw (Form::GradeTooHighException());
	if (gradeE > 150)
		throw (Form::GradeTooLowException());
	else if (gradeE < 1)
		throw (Form::GradeTooHighException());
}

Form::Form(const Form &copy) : name(copy.name), sign(copy.sign), gradeRequiredSign(copy.gradeRequiredSign), gradeRequiredExec(copy.gradeRequiredExec)
{}

Form::~Form(){}

const char * Form::GradeTooHighException::what () const throw ()
{
	return "Too High";
}

const char * Form::GradeTooLowException::what () const throw ()
{
	return "Too Low";
}

void	Form::beSigned(const Bureaucrat& b)
{
	if (b.getGrade() > this->gradeRequiredSign)
		throw (Form::GradeTooLowException());
	this->sign = true;
}

Form &Form::operator=(const Form &copy)
{
	*const_cast<std::string *>(&name) = copy.getName();
	*const_cast<int *>(&gradeRequiredSign) = copy.getGS();
	*const_cast<int *>(&gradeRequiredExec) = copy.getGE();
	sign = copy.getSign();
	return (*this);
}

std::ostream & operator << (std::ostream & out, const Form & f)
{
	out << "The Form: [" << f.getName() << "] require the grade " << f.getGS() << " to sign and " << f.getGE() << " to execute" << std::endl;
	return (out);
}
