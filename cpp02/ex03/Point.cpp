/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 19:11:28 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/21 20:31:41 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point()
{
	// initializes x and y to 0.
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Point::Point(const Point &p) : x(p.x ), y(p.y) 
{
}

Point::~Point()
{
}

Point&	Point::operator=(Point const &a)
{
	(Fixed)this->x = Fixed(a.x);
	(Fixed)this->y = Fixed(a.y);
	return(*this);
}

Fixed	Point::getX() const
{
	return(this->x);
}

Fixed	Point::getY() const
{
	return(this->y);
}
