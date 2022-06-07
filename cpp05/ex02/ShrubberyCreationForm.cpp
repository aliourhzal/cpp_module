/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 13:08:04 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 13:13:30 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy) : Form(copy.getName(), copy.getGS(), copy.getGE())
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator = (const ShrubberyCreationForm & copy)
{
	*const_cast<std::string *>(&name) = copy.getName();
	*const_cast<int *>(&gradeRequiredSign) = copy.getGS();
	*const_cast<int *>(&gradeRequiredExec) = copy.getGE();
	sign = copy.getSign();
	return (*this);
}

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

void  ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() <= this->getGE() && this->getSign())
		DrawTree(this->name);
	else if (!this->getSign())
		throw (ShrubberyCreationForm::NotSignedException());
	else
		throw (ShrubberyCreationForm::GradeTooLowException());
}

const char * ShrubberyCreationForm::NotSignedException::what () const throw ()
{
	return ("Form Not Signed To Be Executed");
}