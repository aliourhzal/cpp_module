/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:53:09 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:43:05 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = copy.type;
}

Animal & Animal::operator = (Animal &copy)
{
	std::cout << "Animal copy assignement constructor called" << std::endl;
	this->type = copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const 
{
	return(this->type);
}

void Animal::makeSound() const
{
	std::cout << "aaaaaaaaaaaaaaaa" << std::endl;
}

std::string Animal::getBrain(int i) const
{
	return (br->ideas[i]);
}
