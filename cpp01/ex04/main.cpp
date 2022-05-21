/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 12:14:17 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/20 19:32:35 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void	replaceFunc(std::string txt,std::string fileName, std::string s1, std::string s2)
{
	int i;
	std::ofstream ToWrite;
	std::string	ToReplace;

	i = 0;
	ToWrite.open(fileName + ".replace", std::ios_base::app);
	if (!ToWrite)
	{
		std::cout << "coudnt open the file to write" << std::endl;
		exit(0);	
	}
	while (txt[i])
	{
		if (txt[i] != s1[0])
			ToWrite << txt[i];
		else
		{
			ToReplace = txt.substr(i, s1.length());
			if (ToReplace == s1)
			{
				
				ToWrite << s2;
				i += s1.length() - 1;
			}
			else
				ToWrite << txt[i];
		}
		i++;
	}
	ToWrite << std::endl;
}

int main(int ac, char** av)
{
	std::ifstream ToRead(av[1]);
	std::string txt;

	if (ac < 4)
	{
		std::cout << "too few arguments" << std::cout;
		return (0);
	}
	if (!ToRead)
	{
		std::cout << "no such file" << std::endl;
		exit(1);	
	}
	while(std::getline(ToRead, txt))
	{
		replaceFunc(txt, av[1],av[2], av[3]);
	}
	ToRead.close();
}