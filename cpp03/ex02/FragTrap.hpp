/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:39:44 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/31 02:57:15 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(std::string name);
		FragTrap(FragTrap& copy);
		FragTrap & operator = (FragTrap& copy);
		~FragTrap();

		void attack(const std::string& target);
		void highFivesGuys(void);
};

