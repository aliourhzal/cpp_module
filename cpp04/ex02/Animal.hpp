/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:45:02 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 15:33:55 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal 
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(Animal &copy);
		Animal & operator = (Animal &copy);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;
		virtual	std::string getBrain(int i) const = 0;
};

#endif