/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:20:30 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/20 13:22:50 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	FixedPoint = 0;
}

Fixed::Fixed(Fixed &init)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = init;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl; 
	return(FixedPoint);
}

void Fixed::setRawBits( int const raw )
{
	this->FixedPoint = raw;
}

Fixed & Fixed::operator = (const Fixed &rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->FixedPoint = rhs.getRawBits();
	return (*this);
}