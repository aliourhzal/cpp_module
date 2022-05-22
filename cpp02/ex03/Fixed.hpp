/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:10 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/21 14:53:57 by aourhzal         ###   ########.fr       */
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

		Fixed & operator ++ (void);
		Fixed operator ++ (int);
		Fixed & operator -- (void);
		Fixed operator -- (int);

		/* min & max */
		static Fixed&	min(Fixed &f1, Fixed &f2);
		static const Fixed&	min(const Fixed &f1, const Fixed &f2);
		static Fixed&	max(Fixed &f1, Fixed &f2);
		static const Fixed&	max(const Fixed &f1, const Fixed &f2);
};
std::ostream& operator << (std::ostream &out, const Fixed &rhs);

#endif