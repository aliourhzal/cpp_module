/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:56:59 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/23 15:08:50 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		DiamondTrap(std::string Name) : FragTrap(Name), ScavTrap(Name)
		{
			std::cout << "DiamondTrap constructor is called" << std::endl;
			this->Name = Name;
			HitPoints = FragTrap::HitPoints;
			EnergyPoints = ScavTrap::EnergyPoints;
			AttackDamage = FragTrap::AttackDamage;
		}

		DiamondTrap(DiamondTrap & copy) : FragTrap(copy.Name), ScavTrap(copy.Name)
		{
			std::cout << "DiamondTrap copy constructor is called" << std::endl;
			Name = copy.Name;
			HitPoints = copy.HitPoints;
			EnergyPoints = copy.EnergyPoints;
			AttackDamage = copy.AttackDamage;
		}

		DiamondTrap & operator = (DiamondTrap & copy)
		{
			std::cout << "DiamondTrap copy assignement operator is called" << std::endl;
			Name = copy.Name;
			HitPoints = copy.HitPoints;
			EnergyPoints = copy.EnergyPoints;
			AttackDamage = copy.AttackDamage;
			return (*this);
		}
		~DiamondTrap()
		{
			std::cout << "DiamondTrap destructor is called" << std::endl;
		}

		int getHitPoint()
		{
			return (HitPoints);
		}
		int getEnergyPoints()
		{
			return (EnergyPoints);
		}
		int getAttackDamage()
		{
			return (AttackDamage);
		}
};