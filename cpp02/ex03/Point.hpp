/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:12:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/21 20:31:15 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	POINT_HPP
#define	POINT_HPP

#include "Fixed.hpp"

class Point
{
	private:
		Fixed const	x;
		Fixed const	y;
	public:
		Point();
		Point(const float x, const float y);
		Point(const Point &p);
		~Point();
		Point&	operator=(Point const &a);
		Fixed	getX() const;
		Fixed	getY() const;
};

#endif