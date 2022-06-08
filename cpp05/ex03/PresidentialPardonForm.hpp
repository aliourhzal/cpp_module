/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 16:50:12 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 14:14:48 by aourhzal         ###   ########.fr       */
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
		PresidentialPardonForm & operator = (const PresidentialPardonForm & copy);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & executor) const;
		class NotSignedException : public std::exception
		{
			const char * what () const throw ();
		};
};

