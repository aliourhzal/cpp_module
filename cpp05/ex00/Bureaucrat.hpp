/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 14:17:29 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/25 23:08:25 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat
{
	private:
		const std::string name;
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
};

std::ostream & operator << (std::ostream &out, const Bureaucrat &b);

#endif
