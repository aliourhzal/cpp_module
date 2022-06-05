/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:07:05 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 01:54:23 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 50;
	AttackDamage = 20;
}

ScavTrap::ScavTrap(ScavTrap& copy) : ClapTrap(copy.Name)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
}

ScavTrap & ScavTrap::operator = (ScavTrap& copy)
{
	this->Name = copy.Name;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoints = copy.EnergyPoints;
	this->HitPoints = copy.HitPoints;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << Name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!";
		EnergyPoints -= 1;
	}
	else if (!HitPoints)
		std::cout << Name << "is Dead" << std::endl;
}