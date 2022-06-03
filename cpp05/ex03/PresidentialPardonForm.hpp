/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:50:12 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/31 18:30:55 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Form.hpp"
#include <ctime>

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm & copy);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
		class NotSignedException : public std::exception
		{
			const char * what () const throw ()
			{
				return ("Form Not Signed To Be Executed");
			}
		};
};

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
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