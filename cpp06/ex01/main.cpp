/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:02:05 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/02 20:37:40 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_Data
{
	int x;
	int y;
} Data;

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main()
{
	Data *a;
	Data *c;
	uintptr_t b;

	a = new Data;
	a->x = 5;
	a->y = 10;
	std::cout << "x: " << a->x << " y: " << a->y << std::endl;
	b = serialize(a);
	c = deserialize(b);
	std::cout << "x: " << c->x << " y: " << c->y << std::endl;
}