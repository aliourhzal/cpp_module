/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:43:54 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 02:20:13 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB {
	public:
		Weapon		*weaponB;
		std::string	name;
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string Name);
};


#endif