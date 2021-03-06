/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:10 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/20 21:01:52 by aourhzal         ###   ########.fr       */
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
};
std::ostream& operator << (std::ostream &out, const Fixed &rhs);

#endif