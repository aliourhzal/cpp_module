/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 23:50:42 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/02 23:52:36 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int i;
	srand(time(NULL));
	i = rand() % 3;
	std::cout << i << std::endl;
	switch (i)
	{
		case 0:
			return (new A);
		case 1:
			return (new B);
		case 2:
			return (new C);
	}
	return (nullptr);
}

void identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "p is pointing to A object" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "p is pointing to B object" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "p is pointing to C object" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast <A &>(p);
		std::cout << "p is pointing to A object" << std::endl;
	}
	catch(const std::exception& e)
	{
		try
		{
			(void)dynamic_cast <B &>(p);
			std::cout << "p is pointing to B object" << std::endl;
		}
		catch(const std::exception& e)
		{
			try
			{
				(void)dynamic_cast <C &>(p);
				std::cout << "p is pointing to C object" << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cout << "error occured while casting" << std::endl;
			}
		}
	}
}