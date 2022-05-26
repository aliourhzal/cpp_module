/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 22:02:26 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:26:13 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *br;
	public:
		Cat();
		Cat(Cat & copy);
		Cat & operator = (Cat & copy);
		~Cat();

		void makeSound() const;
		std::string getBrain(int i) const;
};

#endif