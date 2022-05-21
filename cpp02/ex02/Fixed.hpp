/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:10 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/21 00:15:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
	private:
		int FixedPoint;
		const static int Fractional = 8;
	public:
		Fixed();
		Fixed(Fixed const &init);
		Fixed(const int ToTransform);
		Fixed(const float ToTransform);
		~Fixed();
		float toFloat( void ) const;
		int toInt( void ) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		Fixed & operator = (const Fixed &rhs);

		/* the  comparison operators */
		
		bool	operator > (const Fixed & rhs);
		bool	operator < (const Fixed & rhs);
		bool	operator >= (const Fixed & rhs);
		bool	operator <= (const Fixed & rhs);
		bool	operator == (const Fixed & rhs);
		bool	operator != (const Fixed & rhs);
		
		/* The arithmetic operators */
		
		Fixed operator + (const Fixed &rhs);
		Fixed operator - (const Fixed &rhs);
		Fixed operator * (const Fixed &rhs);
		Fixed operator / (const Fixed &rhs);

		/* The increment/decrement operators */

		Fixed & operator ++ (void)
		{
			this->FixedPoint++;
			return(*this);
		}
		Fixed	operator ++ (int)
};
std::ostream& operator << (std::ostream &out, const Fixed &rhs);

#endif