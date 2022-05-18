/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:43:43 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 02:26:20 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack()
{
	std::cout << name << " attacks with their " << weaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon	&weapon)
{
	weaponB = &weapon;
}

HumanB::HumanB(std::string Name) : weaponB(NULL), name(Name){}