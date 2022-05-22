/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:39:44 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 18:08:30 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(std::string name);
		ScavTrap(ScavTrap& copy);
		ScavTrap & operator = (ScavTrap& copy);
		~ScavTrap();
		
		void guardGate();
		void attack(const std::string& target);
};
