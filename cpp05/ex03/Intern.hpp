/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:00:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/31 23:57:39 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		// Intern();
		// Intern(Intern &copy);
		// ~Intern();
		
		class NoSuchFormException : public std::exception
		{
			const char * what() const throw()
			{
				return ("No Such Form To Fill");
			}
		};

		Form * makeForm(std::string name, std::string target)
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
};