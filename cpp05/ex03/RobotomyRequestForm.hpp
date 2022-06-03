/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 14:37:37 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/31 18:34:28 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <ctime>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm & copy);
		~RobotomyRequestForm();

		void	execute(Bureaucrat const & executor) const;
		class NotSignedException : public std::exception
		{
			const char * what () const throw ()
			{
				return ("Form Not Signed To Be Executed");
			}
		};
};

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
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