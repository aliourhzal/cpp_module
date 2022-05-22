/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/21 21:14:16 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 17:40:38 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string Name;
		int HitPoints;
		int	EnergyPoints;
		int	AttackDamage;
	public:
		ClapTrap(std::string name);
		ClapTrap(ClapTrap& copy);
		ClapTrap & operator = (ClapTrap& copy);
		~ClapTrap();
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void setAttackDamage(int amout);
		int getAttackDamage(void);
};

#endif