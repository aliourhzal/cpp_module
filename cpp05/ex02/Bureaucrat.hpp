/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:17:29 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/29 22:05:05 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Form;

class	Bureaucrat
{
	private:
		std::string const name;
		int grade;
	public:
		Bureaucrat(std::string _name, int _grade);
		Bureaucrat(const Bureaucrat & copy);
		Bureaucrat & operator = (const Bureaucrat & copy);
		~Bureaucrat();
		
		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ();
		};
		class GradeTooLowException : public std::exception
		{
			const char * what () const throw ();
		};
		void		incrementGrade();
		void		decrementGrade();
		std::string	getName() const;
		int			getGrade() const;
		void	signForm(Form &form);
};

std::ostream & operator << (std::ostream &out, const Bureaucrat &b);
