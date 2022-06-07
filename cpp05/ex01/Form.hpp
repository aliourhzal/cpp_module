/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:40:04 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 09:31:15 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string name;
		bool sign;
		const int gradeRequiredSign;
		const int gradeRequiredExec;
	public:
		class GradeTooLowException : public std::exception
		{
			const char * what () const throw ();
		};
		class GradeTooHighException : public std::exception
		{
			const char * what () const throw ();
		};
		std::string getName() const;
		bool getSign() const;
		int getGS() const;
		int getGE() const;
		void	beSigned(const Bureaucrat& b);
		
		Form(std::string name, int gradeS, int gradeE);
		Form(const Form &copy);
		Form & operator=(const Form & copy);
		~Form();
};

std::ostream & operator << (std::ostream & out, const Form & f);
