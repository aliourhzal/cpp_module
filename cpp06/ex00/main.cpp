/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 13:21:00 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/02 14:27:26 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

std::string getType(char *av)
{
	int i = 0;
	if (strlen(av) == 1 && isalpha(av[1]))
		return ("char");
	else if ((av[0] == '-' || av[0] == '+') && isdigit(av[1]))
	{
		if (av[0] == '-' || av[0] == '+')
			i++;
		for (i; isdigit(av[i]); i++){}
		if (!av[i] && (i == 10 || (i == 11 && (av[0] == '-' || av[0] == '+'))))
			return ("int");
		else if (!av[i])
			return ("double");
	}
		
}

int main(int ac, char **av)
{
	if (ac == 2)
		getType(av[1]);
}