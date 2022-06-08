/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 14:12:50 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 14:14:47 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm & PresidentialPardonForm::operator = (const PresidentialPardonForm & copy)
{
	*const_cast<std::string *>(&name) = copy.getName();
	*const_cast<int *>(&gradeRequiredSign) = copy.getGS();
	*const_cast<int *>(&gradeRequiredExec) = copy.getGE();
	sign = copy.getSign();
	return (*this);
}


void  PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGE() && this->getSign())
	{
		std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if (!this->getSign())
		throw (PresidentialPardonForm::NotSignedException());
	else
		throw (PresidentialPardonForm::GradeTooLowException());
}

const char * PresidentialPardonForm::NotSignedException::what () const throw ()
{
	return ("Form Not Signed To Be Executed");
}