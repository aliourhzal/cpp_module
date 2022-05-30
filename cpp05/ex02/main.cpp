/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 21:29:06 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/29 23:59:48 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	std::cout << std::endl;
    std::cout << "[test_1]" << std::endl;
    try
    {
        Bureaucrat Shin("Shin", 1);
        Bureaucrat Kang("Kang", 50);
        Bureaucrat Park("Park", 100);
        Form a("a", 50, 140);
        Form b("b", 10, 20);
        Shin.signForm(a);
        Shin.signForm(b);
        std::cout << ">----------------------------------<" << std::endl;
        Kang.signForm(a);
        Kang.signForm(b);
        std::cout << ">----------------------------------<" << std::endl;
        Park.signForm(a);
        Park.signForm(b);
		std::cout << a << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
	
}