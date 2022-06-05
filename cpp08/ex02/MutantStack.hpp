/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 01:14:25 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 01:14:40 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){}
		MutantStack(const MutantStack &copy) : std::stack<T>(copy){}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		MutantStack &operator=(const MutantStack &srcObject)
		{
			if (this == &srcObject)
				return (*this);
			std::stack<T>::operator=(srcObject);
			return (*this);
		};
		
		iterator begin(){ return (std::stack<T>::c.begin());}
		const_iterator begin() const { return (std::stack<T>::c.begin());}
		
		iterator end(){ return (std::stack<T>::c.end());}
		const_iterator end() const { return (std::stack<T>::c.end());}

		reverse_iterator rbegin(){ return (std::stack<T>::c.rbegin());}
		const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin());}

		reverse_iterator rend() { return (std::stack<T>::c.rend());}
		const_reverse_iterator rend() const { return (std::stack<T>::c.rend());}
};