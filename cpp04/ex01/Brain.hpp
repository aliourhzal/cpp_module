/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 13:10:57 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/24 14:16:45 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP
	

#include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain(std::string idea);
		Brain(const Brain &copy);
		Brain & operator = (const Brain &copy);
		~Brain();
};

#endif