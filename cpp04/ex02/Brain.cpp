/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 14:07:06 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:17:31 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(std::string idea)
{
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = idea;
	}
}

Brain::Brain(const Brain &copy)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
}

Brain & Brain::operator=(const Brain &copy)
{
	std::cout << "Brain copy assignement operator is called" << std::endl;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor is called" << std::endl;
}