/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:53:50 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/04 01:16:09 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N)
{
	size = N;
}

void	Span::addNumber(int toAdd)
{
	if (vec.size() == static_cast<unsigned long>(size))
		throw NoMoreSpace();
	vec.push_back(toAdd);
}

int	Span::shortestSpan()
{
	int min;

	min = 0;
	if (vec.size() <= 1)
		throw TooFewElements();
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		for (std::vector<int>::iterator j = i + 1; j != vec.end(); j++)
			if (min > abs(*i - *j))
				min = abs(*i - *j);
	return (min);
}

int	Span::longestSpan()
{
	int max;

	max = 0;
	if (vec.size() <= 1)
		throw TooFewElements();
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		for (std::vector<int>::iterator j = i + 1; j != vec.end(); j++)
			if (max < abs(*i - *j))
				max = abs(*i - *j);
		
	return (max);
}
