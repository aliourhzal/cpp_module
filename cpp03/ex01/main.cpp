/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:51:29 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 18:11:12 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap Kim("Kim");
	ScavTrap Shin("Shin");
	ScavTrap Park("Park");

	std::cout << std::endl;

	Kim.attack("Park");
	Park.takeDamage(Kim.getAttackDamage());
	std::cout << std::endl;

	Shin.attack("Park");
	Park.takeDamage(Shin.getAttackDamage());
	std::cout << std::endl;
	
	Kim.attack("Park");
	Park.takeDamage(Kim.getAttackDamage());
	std::cout << std::endl;

	Shin.attack("Park");
	Park.takeDamage(Shin.getAttackDamage());
	std::cout << std::endl;

	Park.attack("Kim");
	Kim.takeDamage(Park.getAttackDamage());
	std::cout << std::endl;
	
	Park.attack("Shin");
	Shin.takeDamage(Park.getAttackDamage());
	std::cout << std::endl;
	
	Kim.attack("Park");
	Park.takeDamage(Kim.getAttackDamage());
	std::cout << std::endl;

	Kim.beRepaired(25);
	Shin.beRepaired(25);
	Park.beRepaired(25);

	Kim.attack("Park");
	Park.takeDamage(Kim.getAttackDamage());
	std::cout << std::endl;
	return (0);
}