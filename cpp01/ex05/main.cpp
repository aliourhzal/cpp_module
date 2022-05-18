/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:45:10 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/18 19:04:10 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl boo;

	boo.complain("DEBUG");
	boo.complain("INFO");
	boo.complain("WARNING");
	boo.complain("ERROR");
	return 0;
	
}