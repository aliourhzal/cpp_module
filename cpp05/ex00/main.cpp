/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:29:06 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/07 09:19:46 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat b0("b0", 150);
	// Bureaucrat b1("ll", 5);
	// Bureaucrat b2("b2", 5);
	// Bureaucrat b3("b3", 149);
	try
	{
		std::cout << b0 << std::endl;
		b0.decrementGrade();
		std::cout << b0 << std::endl;
		b0.decrementGrade();
		std::cout << b0 << std::endl;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	
}