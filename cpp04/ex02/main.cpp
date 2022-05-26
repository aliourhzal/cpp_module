/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:42:11 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 16:03:23 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal* meta[20];
	const Animal *Hello;
	Hello = new Dog();
	for (int i = 0; i < 10; i++)
		meta[i] = new Dog();
	for (int i = 10; i < 20; i++)
		meta[i] = new Cat();
	std::cout << meta[1]->getBrain(16) << std::endl;
	for(int i = 0; i < 20; i++)
		delete meta[i];
}