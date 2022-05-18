/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:13:07 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/17 22:48:47 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int	main()
{
	Zombie *Horde = zombieHorde(10, "foo");
	for (int i = 0; i < 10; i++)
		Horde[i].announce();
	delete [] Horde;
}