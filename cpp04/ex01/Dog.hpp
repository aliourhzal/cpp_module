/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:02:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:37:01 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *br;
	public:
		Dog();
		Dog(Dog & copy);
		Dog & operator = (Dog & copy);
		~Dog();

		void makeSound() const;
		std::string getBrain(int i) const;
};

#endif