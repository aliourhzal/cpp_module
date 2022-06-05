/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 18:07:05 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 02:07:01 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap default constructor called" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::FragTrap(FragTrap& copy) : ClapTrap(copy.Name)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
}

FragTrap & FragTrap::operator = (FragTrap& copy)
{
	this->Name = copy.Name;
	this->AttackDamage = copy.AttackDamage;
	this->EnergyPoints = copy.EnergyPoints;
	this->HitPoints = copy.HitPoints;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
	if (HitPoints && EnergyPoints)
	{
		std::cout << "FragTrap " << Name << " attacks " << target << ", causing " << AttackDamage << " points of damage!" << std::endl;
		EnergyPoints -= 1;
	}
	else if (!HitPoints)
		std::cout << Name << "is Dead" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "positive high fives request" << std::endl;
}