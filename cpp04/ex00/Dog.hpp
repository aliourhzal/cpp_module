/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:02:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 23:39:33 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(Dog & copy);
		Dog & operator = (Dog & copy);
		~Dog();

		void makeSound() const;
};
