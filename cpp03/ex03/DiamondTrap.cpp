/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 03:20:13 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 14:50:46 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name) : ClapTrap(Name + "_clap_name"), FragTrap(Name), ScavTrap(Name)
{
	std::cout << "DiamondTrap constructor is called" << std::endl;
	this->Name = Name;
	HitPoints = FragTrap::HitPoints;
	EnergyPoints = ScavTrap::EnergyPoints;
	AttackDamage = FragTrap::AttackDamage;
}

DiamondTrap::DiamondTrap(DiamondTrap & copy) : ClapTrap(copy.Name + "_clap_name"), FragTrap(copy.Name), ScavTrap(copy.Name)
{
	std::cout << "DiamondTrap copy constructor is called" << std::endl;
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
}

DiamondTrap & DiamondTrap::operator = (DiamondTrap & copy)
{
	std::cout << "DiamondTrap copy assignement operator is called" << std::endl;
	Name = copy.Name;
	HitPoints = copy.HitPoints;
	EnergyPoints = copy.EnergyPoints;
	AttackDamage = copy.AttackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor is called" << std::endl;
}

int DiamondTrap::getHitPoint()
{
	return (HitPoints);
}

int DiamondTrap::getEnergyPoints()
{
	return (EnergyPoints);
}

int DiamondTrap::getAttackDamage()
{
	return (AttackDamage);
}

void DiamondTrap::whoAmI()
{
	std::cout << "My Name is: " << Name << " And My ClapTrap Name is: " << ClapTrap::Name << std::endl;
}