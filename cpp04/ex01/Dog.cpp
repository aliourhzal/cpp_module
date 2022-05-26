/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:10:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:40:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constuctor called" << std::endl;
	type = "Dog";
	br = new Brain("dog thoughts ....");
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
	delete br;
}

void Dog::makeSound() const
{
	std::cout << "Waff Waff" << std::endl;
}

std::string Dog::getBrain(int i) const
{
	return(br->ideas[i]);
}