/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 09:05:43 by aourhzal          #+#    #+#             */
/*   Updated: 2022/06/08 14:12:09 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>
#include <cmath>
#include <iomanip>

int p;

void outOfRange(char *instant)
{
	if (!strcmp(instant,"-inff") || !strcmp(instant,"-inf"))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else if (!strcmp(instant,"+inff") || !strcmp(instant,"+inf"))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: +inff" << std::endl;
		std::cout << "double: +inf" << std::endl;
	}
	else if (!strcmp(instant,"nan") || !strcmp(instant,"nanf"))
	{
		std::cout << "char: Impossible" << std::endl;
		std::cout << "int: Impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
}

std::string	extractType(char *instant)
{
	double digit;
	char *ptr;
	bool dot = false;

	digit = strtod(instant, &ptr);
	if (strlen(instant) == 1 && isalpha(instant[0]))
		return ("char");
	if (!strcmp(instant,"-inff") || !strcmp(instant,"+inff") || !strcmp(instant,"nanf"))
	{
		outOfRange(instant);
		return ("float");
	}
	if (!strcmp(instant,"-inf") || !strcmp(instant,"+inf") || !strcmp(instant,"nan"))
	{
		outOfRange(instant);
		return ("double");
	}
	for (int i = 0; instant[i]; i++)
	{
		if (instant[i] == '.')
			dot = true;
		if (dot)
			p++;
	}
	if ((digit >= std::numeric_limits<int>::min() && std::numeric_limits<int>::max()) && !dot && !*ptr)
		return ("int");
	else if (!dot && !*ptr)
		return ("double");
	if (*ptr == 'f' && !*(ptr + 1) && digit >= std::numeric_limits<float>::lowest() && digit <= std::numeric_limits<float>::max())
		return ("float");
	else if (dot && !*ptr)
		return ("double");
	return ("Unknown");
}

void	IntBaseConversion(int i)
{
	if (i < 32 || (i > 126 && i < 256))
		std::cout << "char: Non displayable" << std::endl;
	else if (i > 256)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << "f" << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl;
}

void	CharBaseConversion(char i)
{
	std::cout << "char: '" << i << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(i) << 'f' << std::endl; 
	std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(i) << std::endl; 
}

void	floatBaseConversion(float i)
{
	if (i < 32 || (i > 126 && i < 256))
		std::cout << "char: Non displayable" << std::endl;
	else if (i > 256)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << std::fixed << std::setprecision(p - 2) << "float: " << i << 'f' << std::endl; 
	std::cout << std::fixed << std::setprecision(p - 2) << "double: " << static_cast<double>(i) << std::endl;
}

void	doubleBaseConversion(double i)
{
	if ((i < 32 && i >=0) || (i > 126 && i < 256))
		std::cout << "char: Non displayable" << std::endl;
	else if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(i) << std::endl;
	std::cout << std::fixed << std::setprecision(p - 1) << "float: " << i << 'f' << std::endl; 
	std::cout << std::fixed << std::setprecision(p - 1) << "double: " << static_cast<double>(i) << std::endl;
}

int main(int ac, char **av)
{
	std::string type;
	char c;
	int i;
	float f;
	double d;

	if (ac == 2)
		type = extractType(av[1]);
	if (type == "char")
	{
		c = av[1][0];
		CharBaseConversion(c);
	}
	else if (type == "int")
	{
		i = std::stoi(av[1]);
		IntBaseConversion(i);
	}
	else if (type == "float" && strcmp(av[1], "-inff") && strcmp(av[1], "+inff") && strcmp(av[1], "nanf"))
	{
		f = (float)strtod(av[1], nullptr);
		floatBaseConversion(f);
	}
	else if (type == "double" && strcmp(av[1], "-inf") && strcmp(av[1], "+inf") && strcmp(av[1], "nan"))
	{
		d = strtod(av[1], NULL);
		doubleBaseConversion(d);
	}
	else if (type == "Unknown")
		outOfRange((char *)"nan");
}