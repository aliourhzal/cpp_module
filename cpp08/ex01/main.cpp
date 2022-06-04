/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 21:20:37 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/04 01:16:33 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int f()
{
	static int i;
	return i++;
}

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	/********************/
	// Span test(100);
	// std::vector<int> srcTest(97);
	// std::generate(srcTest.begin(), srcTest.end(), f);
	
	// try
	// {
	// 	test.ultimateAddNumber(srcTest.begin(), srcTest.end());
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	// std::cout << test.longestSpan() << std::endl;
	// std::cout << test.shortestSpan() << std::endl;

	// try
	// {
	// 	test.addNumber(-1);
	// 	test.addNumber(-2);
	// 	test.addNumber(-3);
	// 	test.addNumber(-4);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }
	
	// return 0;
}