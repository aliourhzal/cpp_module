/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 21:15:21 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/02 23:52:27 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Base
{
	public:
		virtual ~Base(){}
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);
