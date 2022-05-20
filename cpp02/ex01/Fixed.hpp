/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/19 11:48:10 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/19 23:29:24 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
	private:
		int FixedPoint;
		const static int Fractional = 8;
	public:
		Fixed(const int ToTransform)
		{
			
		}
		// Fixed(Fixed &init);
		// ~Fixed();
		// Fixed & operator = (const Fixed &rhs);
		// int getRawBits( void ) const;
		// void setRawBits( int const raw );
};

#endif