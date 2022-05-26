/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 00:36:48 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/26 01:34:29 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* getters */

std::string	Contact::getFirstName(void)
{
	return (FirstName);
}
std::string	Contact::getLastName(void)
{
	return (LastName);
}
std::string	Contact::getPhoneNumber(void)
{
	return (PhoneNumber);
}
std::string	Contact::getNickName(void)
{
	return (NickName);
}
std::string	Contact::getDarkestSecret(void)
{
	return (DarkestSecret);
}

/* setters */

void Contact::setFirstName(std::string content)
{
	FirstName = content;
}

void Contact::setLastName(std::string content)
{
	LastName = content;
}

void Contact::setPhoneNumber(std::string content)
{
	PhoneNumber = content;
}

void Contact::setNickName(std::string content)
{
	NickName = content;
}

void Contact::setDarkestSecret(std::string content)
{
	DarkestSecret = content;
}