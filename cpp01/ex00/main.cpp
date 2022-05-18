/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 16:57:49 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/17 17:00:15 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int	main(void)
{

	Zombie *zombie[2];

	zombie[0] = newZombie("zombie_1");
	zombie[1] = newZombie("zombie_2");

	randomChump("zombie_3");

	zombie[0]->announce();
	zombie[1]->announce();

	for(int i = 0; i < 2; i++)
		delete zombie[i];

	return (0);
}