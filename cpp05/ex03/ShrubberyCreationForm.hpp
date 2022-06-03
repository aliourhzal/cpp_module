/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 00:01:37 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/31 22:54:22 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm & copy);
		ShrubberyCreationForm & operator = (const ShrubberyCreationForm & copy);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
		class NotSignedException : public std::exception
		{
			const char * what () const throw ()
			{
				return ("Form Not Signed To Be Executed");
			}
		};
};

void DrawTree(std::string target)
{
	std::ofstream File;

	File.open(target + "_shrubbery");

File <<"               ,@@@@@@@," << std::endl;
File <<"       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
File <<"    ,&%\\%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
File <<"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
File <<"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
File <<"   %&&%/ %&%\\%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
File <<"   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
File <<"       |o|        | |         | |" << std::endl;
File <<"       |.|        | |         | |" << std::endl;
File <<"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGE() && this->getSign())
		DrawTree(this->name);
	else if (!this->getSign())
		throw (ShrubberyCreationForm::NotSignedException());
	else
		throw (ShrubberyCreationForm::GradeTooLowException());
}
