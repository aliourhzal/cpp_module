/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:26:39 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constuctor called" << std::endl;
	type = "Cat";
	br = new Brain("cat thoughts ....");
}

Cat::Cat(Cat & copy): Animal()
{
	std::cout << "Cat copy constuctor called" << std::endl;
	type = copy.type;
}

Cat & Cat::operator = (Cat & copy)
{
	std::cout << "Cat copy assignment constuctor called" << std::endl;
	this->type = copy.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete br;
}

void Cat::makeSound() const
{
	std::cout << "miaw miaw" << std::endl;
}

std::string Cat::getBrain(int i) const
{
	return(br->ideas[i]);
}