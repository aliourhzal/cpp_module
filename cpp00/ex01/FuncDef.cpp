/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FuncDef.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:16:56 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/17 14:13:23 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void	FillAndCheck(std::string &field, std::string FieldTitle);

void PhoneBook::SetContact(int ContactIndex)
{
	FillAndCheck(this->Contacts[ContactIndex].FirstName, "First Name: ");
	FillAndCheck(this->Contacts[ContactIndex].LastName, "Last Name: ");
	FillAndCheck(this->Contacts[ContactIndex].NickName, "Nick Name: ");
	FillAndCheck(this->Contacts[ContactIndex].PhoneNumber, "Phone Number: ");
}

void	PhoneBook::PrintInfo(int i)
{
	if (i >= this->counter || i < 0)
	{
		std::cout << "Contact Not Found\n";
		return ;
	}
	std::cout << "First Name: " << this->Contacts[i].FirstName << std::endl;
	std::cout << "Last Name: " << this->Contacts[i].LastName << std::endl;
	std::cout << "Nick Name: " << this->Contacts[i].NickName << std::endl;
	std::cout << "Phone NUmber: " << this->Contacts[i].PhoneNumber << std::endl;
}