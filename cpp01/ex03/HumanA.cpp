/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:43:16 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 02:26:00 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack()
{
	std::cout << name << " attacks with their " << weaponA.getType() << std::endl;
}

HumanA::HumanA(std::string Name ,Weapon	&weapon) : weaponA(weapon), name(Name){}