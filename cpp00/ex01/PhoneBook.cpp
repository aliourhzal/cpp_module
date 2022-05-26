/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FuncDef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:16:56 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/26 00:44:05 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	FillAndCheck(std::string FieldTitle);

void PhoneBook::SetContact(int ContactIndex)
{
	this->Contacts[ContactIndex].setFirstName(FillAndCheck("First Name: "));
	this->Contacts[ContactIndex].setLastName(FillAndCheck("Last Name: "));
	this->Contacts[ContactIndex].setPhoneNumber(FillAndCheck("Phone Number: "));
	this->Contacts[ContactIndex].setNickName(FillAndCheck("Nick Name: "));
	this->Contacts[ContactIndex].setDarkestSecret(FillAndCheck("Darkest Secret: "));
}

void	PhoneBook::PrintInfo(int i)
{
	if (i >= this->counter || i < 0)
	{
		std::cout << "Contact Not Found\n";
		return ;
	}
	std::cout << "First Name: " << this->Contacts[i].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->Contacts[i].getLastName() << std::endl;
	std::cout << "Nick Name: " << this->Contacts[i].getNickName() << std::endl;
	std::cout << "Phone NUmber: " << this->Contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->Contacts[i].getDarkestSecret() << std::endl;
}