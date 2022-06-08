/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:15:53 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 13:24:59 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
}

RobotomyRequestForm & RobotomyRequestForm::operator = (const RobotomyRequestForm & copy)
{
	*const_cast<std::string *>(&name) = copy.getName();
	*const_cast<int *>(&gradeRequiredSign) = copy.getGS();
	*const_cast<int *>(&gradeRequiredExec) = copy.getGE();
	sign = copy.getSign();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void  RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGE() && this->getSign())
	{
		std::cout << "[ drilling noises ... ] " ;
		srand(time(NULL));
		if (rand() % 2)
			std::cout << this->getName() << " has been robotomized" << std::endl;
		else
			std::cout << this->getName() << " failed robotomizing " << std::endl;
	}
	else if (!this->getSign())
		throw (RobotomyRequestForm::NotSignedException());
	else
		throw (RobotomyRequestForm::GradeTooLowException());
}

const char * RobotomyRequestForm::NotSignedException::what () const throw ()
{
	return ("Form Not Signed To Be Executed");
}