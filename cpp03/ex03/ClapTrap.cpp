/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:50:23 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 13:17:50 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Default constructor called" << std::endl;
	Name = name;
	HitPoints = 10;
	EnergyPoints = 10;
	AttackDamage = 0;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
	std::cout << "Copy constructor called" << std::endl;
	
}

ClapTrap & ClapTrap::operator = (ClapTrap& copy)
{
	this->Name = copy.Name;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoints = copy.EnergyPoints;
	this->HitPoints = copy.HitPoints;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
	std::cout << Name << " has " << HitPoints << " HitPoints and " << EnergyPoints << " EnergyPoints" << std::endl;
}

void ClapTrap::setAttackDamage(int amout)
{
	AttackDamage = amout;
}

int ClapTrap::getAttackDamage(void)
{
	return (AttackDamage);
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!";
		EnergyPoints -= 1;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints)
		HitPoints -= amount;	
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << Name << " got Repaired: " << amount << std::endl;
		EnergyPoints -= 1;
		HitPoints += amount;
	}
}
