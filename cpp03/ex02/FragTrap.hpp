/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:39:44 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 20:03:41 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(ScavTrap& copy);
		FragTrap & operator = (ScavTrap& copy);
		~FragTrap();
		
		void guardGate();
		void attack(const std::string& target);
		void highFivesGuys(void);
};

