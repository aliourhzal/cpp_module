/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/23 18:38:43 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Dog default constuctor called" << std::endl;
}

Dog::Dog(Dog & copy): Animal()
{
	type = copy.type;
	std::cout << "Dog copy constuctor called" << std::endl;
}

Dog & Dog::operator = (Dog & copy)
{
	std::cout << "Dog copy assignment constuctor called" << std::endl;
	this->type = copy.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "Waff Waff" << std::endl;
}