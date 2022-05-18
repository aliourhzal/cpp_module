/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 22:09:13 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/17 22:43:29 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string		var;
	std::string*	stringPTR;
	std::string&	stringREF = var;

	var = "HI THIS IS BRAIN";
	stringPTR = &var;
	std::cout << "The memory address of the string variable is: " << &var << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << &stringREF << std::endl;

	std::cout << "The memory address of the string variable is: " << var << std::endl;
	std::cout << "The memory address held by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The memory address held by stringREF: " << stringREF << std::endl;
}