/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/23 13:56:59 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/05 14:48:56 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string Name;
		int HitPoints;
		int EnergyPoints;
		int AttackDamage;
	public:
		DiamondTrap(std::string Name);
		DiamondTrap(DiamondTrap & copy);
		DiamondTrap & operator = (DiamondTrap & copy);
		~DiamondTrap();

		int getHitPoint();
		int getEnergyPoints();
		int getAttackDamage();
		void  whoAmI();
};