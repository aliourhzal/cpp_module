/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 21:45:02 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/23 18:38:39 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
};
