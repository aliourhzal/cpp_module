/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 02:33:56 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 02:55:02 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T> class Array
{
	public:
		Array()
		{
			Array *arr = new Array;
		}
		Array(int n)
		{
			Array *arr = new Array[n];
		}
};

int main()
{
	Array<int *> a(5);

}