/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 19:01:09 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 20:32:47 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> vec;
	for (int i = 65; i < 70; i++)
		vec.push_back(i);
	try
	{
		easyfind(vec, '2');
	}
	catch(const std::exception& e)
	{
		std::cout << "element not found" << std::endl; 
	}
	
}