/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:29:06 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/01 00:14:20 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat b0("bob", 30);
	Bureaucrat b1("Tom", 1);
	Bureaucrat b2("Mark", 40);
	Intern i0;

	Form *S;
	try
	{
		S = i0.makeForm("ShrubberyCreationForm", "planting trees"); // sign 145 exec 137
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return 0;
	}
	
	Form *P;
	P = i0.makeForm("PresidentialPardonForm", "the White House"); // sign 25 exec 5

	Form *R;
	R = i0.makeForm("RobotomyRequestForm", "Robotics club"); // sign 72 exec 45

	std::cout << std::endl;
	std::cout << "---------- Tring to execute without signing ----------" << std::endl;
	try
	{
		S->execute(b0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		P->execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		R->execute(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << std::endl;
	std::cout << "---------- Bureaucrats tring to execute Form with 'executeForm'  ----------" << std::endl;
	try
	{
		b0.executeForm(*S);
		b1.executeForm(*P);
		b2.executeForm(*R);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << std::endl;
	std::cout << "---------- Bureaucrats sign and execute forms with 'executeForm'  ----------" << std::endl;
	b0.signForm(*S);
	b1.signForm(*P);
	b2.signForm(*R);
	std::cout << std::endl;
	b0.executeForm(*S);
	b1.executeForm(*P);
	b2.executeForm(*R);
	
	
}