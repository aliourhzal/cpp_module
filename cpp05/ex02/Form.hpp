/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/29 14:40:04 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/01 01:30:58 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"

class Form
{
	protected:
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
		virtual void execute(Bureaucrat const & executor) const = 0;
		
		Form(std::string name, int gradeS, int gradeE);
		Form(const Form &copy);
		Form & operator=(const Form &srcObject);
		~Form();
};

std::ostream & operator << (std::ostream & out, const Form & f);
