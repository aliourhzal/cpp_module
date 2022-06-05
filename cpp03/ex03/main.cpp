/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:51:29 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 02:48:23 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap Kim("Kim");
	ScavTrap	HH("HH");
	FragTrap	JJ("JJ");

	std::cout << "DiamondTrap_HitPoints: " << Kim.getHitPoint() << std::endl;
	std::cout << "FragTrap_HitPoints: " << JJ.getHitPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "DiamondTrap_EnergyPoints: " << Kim.getEnergyPoints() << std::endl;
	std::cout << "ScavTrap_EnergyPoints: " << HH.getEnergyPoints() << std::endl;
	std::cout << std::endl;
	std::cout << "DiamondTrap_AttackDamage: " << Kim.getAttackDamage() << std::endl;
	std::cout << "FragTrap_AttackDamage: " << JJ.getAttackDamage() << std::endl;
	return (0);
}