/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 23:40:03 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Cat default constuctor called" << std::endl;
}

Cat::Cat(Cat & copy): Animal(copy.type)
{
	std::cout << "Cat copy constuctor called" << std::endl;
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
}

void Cat::makeSound() const
{
	std::cout << "miaw miaw" << std::endl;
}