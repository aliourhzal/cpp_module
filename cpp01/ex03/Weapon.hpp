/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 23:42:27 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 02:21:58 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon {
	private:
		std::string type;
	public:
		std::string	&getType();
		void	setType(std::string	weapon);
		Weapon(std::string tp);
};

#endif