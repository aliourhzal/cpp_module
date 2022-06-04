/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 00:52:12 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/04 00:58:13 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

class Span
{
	private:
		int size;
		std::vector<int> vec;
	public:
		Span(unsigned int N);
		void	addNumber(int toAdd);
		template <typename T>
		void	ultimateAddNumber(T begin, T End)
		{
			if (std::distance(begin, End) > size)
				throw NoMoreSpace();
			T i;
			for (i = begin; i != End; i++)
			{
				vec.push_back(*i);
			}
		}
		class NoMoreSpace : public std::exception
		{
			const char * what() const throw()
			{
				return ("No More Space To Store The Given Number");
			} 
		};
		class TooFewElements : public std::exception
		{
			const char * what() const throw()
			{
				return ("Too Few Elements Are Stored");
			} 
		};
		int	shortestSpan();
		int longestSpan();
		
};