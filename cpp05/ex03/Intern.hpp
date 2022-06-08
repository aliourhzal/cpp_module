/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 23:00:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 14:34:12 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(Intern &copy);
		Intern & operator=(Intern &copy);
		~Intern();
		
		class NoSuchFormException : public std::exception
		{
			const char * what() const throw();
		};

		Form * makeForm(std::string name, std::string target);
};
