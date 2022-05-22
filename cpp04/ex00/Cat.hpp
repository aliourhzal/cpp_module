/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:02:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/22 23:39:39 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

class Cat : public Animal
{
	public:
		Cat();
		Cat(Cat & copy);
		Cat & operator = (Cat & copy);
		~Cat();

		void makeSound() const;
};
