/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 23:20:30 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/21 15:46:20 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	FixedPoint = 0;
}

Fixed::Fixed(Fixed const &init)
{
	*this = init;
}

Fixed::Fixed(const int ToTransform)
{
	this->FixedPoint = 	ToTransform << Fractional;
}

Fixed::Fixed(const float ToTransform)
{
	this->FixedPoint = 	roundf(ToTransform * (1 << Fractional));
}

Fixed::~Fixed()
{
	
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

Fixed & Fixed::operator ++ (void)
{
	this->FixedPoint++;
	return(*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed	old(*this);

	this->FixedPoint++;
	return(old);
}

Fixed & Fixed::operator -- (void)
{
	this->FixedPoint--;
	return(*this);
}

Fixed Fixed::operator -- (int)
{
	Fixed	old(*this);

	this->FixedPoint--;
	return(old);
}

/* The arithmetic operators */

/* min & max */

Fixed&	Fixed::min(Fixed &f1, Fixed &f2)
{
	if (f1 < f2)
		return (f1);
	return(f2);
}

const Fixed&	Fixed::min(const Fixed &f1, const Fixed &f2)
{
	if ((Fixed)f1 < f2)
		return (f1);
	return(f2);
}

Fixed&	Fixed::max(Fixed &f1, Fixed &f2)
{
	if (f1 > f2)
		return (f1);
	return(f2);
}

const Fixed&	Fixed::max(const Fixed &f1, const Fixed &f2)
{
	if ((Fixed)f1 > f2)
		return (f1);
	return(f2);
}

/* min & max */

std::ostream& operator << (std::ostream &out, const Fixed &rhs)
{
	out << rhs.toFloat();
	return (out);
}
