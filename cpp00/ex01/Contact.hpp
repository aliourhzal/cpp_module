/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aourhzal <aourhzal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 01:09:57 by aourhzal          #+#    #+#             */
/*   Updated: 2022/05/26 00:40:00 by aourhzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		std::string FirstName;
		std::string LastName;
		std::string PhoneNumber;
		std::string NickName;
		std::string DarkestSecret;
	public:
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getPhoneNumber(void);
		std::string	getNickName(void);
		std::string	getDarkestSecret(void);
		
		void setFirstName(std::string content);
		void setLastName(std::string content);
		void setPhoneNumber(std::string content);
		void setNickName(std::string content);
		void setDarkestSecret(std::string content);
};

#endif