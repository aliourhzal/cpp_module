/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 01:34:41 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/03 02:32:42 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
	char b[] = "HELLO THERE";
	iter(a, 8, &test);
	for (int i = 0; i < 8; i++)
		printf("[%d]", a[i]);
	std::cout << std::endl;
	for (size_t i = 0; i < strlen(b); i++)
		printf("[%c]", b[i]);
	
}