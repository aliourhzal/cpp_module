/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:20:30 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/20 22:59:53 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	FixedPoint = 0;
}

Fixed::Fixed(Fixed const &init)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = init;
}

Fixed::Fixed(const int ToTransform)
{
	std::cout << "Int constructor called" << std::endl;
	this->FixedPoint = 	ToTransform << Fractional;
}

Fixed::Fixed(const float ToTransform)
{
	std::cout << "Float constructor called" << std::endl;
	this->FixedPoint = 	roundf(ToTransform * (1 << Fractional));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

float Fixed::toFloat( void ) const
{
	return ((float)this->FixedPoint / (1 << Fractional));
}

int Fixed::toInt( void ) const
{
	return(this->FixedPoint >> Fractional);
}

int Fixed::getRawBits( void ) const
{
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

/* the  comparison operators */

bool	Fixed::operator > (const Fixed & rhs)
{
	if (this->FixedPoint > rhs.FixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator < (const Fixed & rhs)
{
	if (this->FixedPoint < rhs.FixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator >= (const Fixed & rhs)
{
	if (this->FixedPoint >= rhs.FixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator <= (const Fixed & rhs)
{
	if (this->FixedPoint <= rhs.FixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator == (const Fixed & rhs)
{
	if (this->FixedPoint == rhs.FixedPoint)
		return (true);
	else
		return (false);
}

bool	Fixed::operator != (const Fixed & rhs)
{
	if (this->FixedPoint != rhs.FixedPoint)
		return (true);
	else
		return (false);
}

/* the  comparison operators */

/* The arithmetic operators */

Fixed Fixed::operator + (const Fixed &rhs)
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator - (const Fixed &rhs)
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator * (const Fixed &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator / (const Fixed &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

/* The arithmetic operators */


std::ostream& operator << (std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}
