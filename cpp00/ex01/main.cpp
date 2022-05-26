/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 01:46:52 by elix              #+#    #+#             */
/*   Updated: 2022/05/26 01:32:54 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

void	TableHeader()
{
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|         i|FIRST NAME|LAST NAME |NICK NAME |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

std::string	CNcharachters(std::string ToDisplay)
{
	if (ToDisplay.length() <= 10)
		return (ToDisplay);
	else
		return (ToDisplay.substr(0, 9) + ".");
}

void	TableContent(PhoneBook book ,int i)
{
	std::cout << "|" << std::setw(10) << i;
	std::cout << "|" << std::setw(10) << CNcharachters(book.Contacts[i].getFirstName());
	std::cout << "|" << std::setw(10) << CNcharachters(book.Contacts[i].getLastName());
	std::cout << "|" << std::setw(10) << CNcharachters(book.Contacts[i].getNickName());
	std::cout << "|" << std::endl;
}

std::string	FillAndCheck(std::string FieldTitle)
{
	std::string field;
	std::cout << FieldTitle;
	if(!std::getline(std::cin, field))
			exit(0);
	while (field == "")
	{
		std::cout << "this field can't be empty!!!" << std::endl;
		std::cout << FieldTitle;
		if (!std::getline(std::cin, field))
			exit(0);
	}
	return (field);
}

void	SearchFunc(PhoneBook book)
{
	int	j;
	std::string index;
	int	a;

	j = 0;
	TableHeader();
	while (j < book.counter)
	{
		TableContent(book, j);
		j++;
	}
	std::cout << "---------------------------------------------" << std::endl;
	j = 0;
	std::cout << "PLEAZE ENTER CONTACT INDEX: ";
	getline(std::cin, index);
	if (index[0] < '0' || index[0] > '9' || index.length() > 1)
		std::cout << "no such contact\n";
	else
	{
		a = std::stoi(index);
		book.PrintInfo(a);
	}
}

int main()
{
	std::string cmd;
	PhoneBook book;
	int i = 0;

	book.counter = 0;
	while (1)
	{
		std::cout << "Enter A Command: ";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
		{
			book.SetContact(i);
			i++;
			if (book.counter <= 8)
				book.counter++;
			if (i == 8)
				i = 0;
		}
		else if (cmd == "SEARCH")
		{
			if (book.counter == 0)
				std::cout << "PLEASE INSERT CONTACTS USING 'ADD'\n";
			else
				SearchFunc(book);
		}
		else if (cmd == "EXIT")
			exit(0);
	}
}