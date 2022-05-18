/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:42:38 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 02:22:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

std::string&	Weapon::getType()
{
	return (type);
}

void	Weapon::setType(std::string	weapon)
{
	type = weapon;
}

Weapon::Weapon(std::string tp)
{
	type = tp;
}