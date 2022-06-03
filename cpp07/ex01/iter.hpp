/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 02:10:38 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 02:11:52 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void test(T &param)
{
	param += 32; 
}

template <typename T>
void	iter(T *arr, int size, void (*f)(T &))
{
	for (int i = 0; i < size; i++)
		f(arr[i]);
}