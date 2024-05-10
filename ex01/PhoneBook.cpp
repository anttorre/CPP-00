/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 15:48:59 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/10 16:20:36 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
}

PhoneBook::~PhoneBook(void)
{}

void	PhoneBook::addContact(void)
{
	std::string	first;
	std::string	last;
	std::string	nick;
	std::string	phone;
	std::string	secret;

	if (this->index > 7)
		std::cout << "You're about to delete " << this->contacts[this->index % 8]->getFirstName() << " contact." << std::endl;
	while (first.empty())
	{
		std::cout << "Enter first name: ";
		std::getline(std::cin, first);
	}
	while (last.empty())
	{
		std::cout << "Enter last name: ";
		std::getline(std::cin, last);
	}
	while (nick.empty())
	{
		std::cout << "Enter nick name: ";
		std::getline(std::cin, nick);
	}
	while (phone.empty())
	{
		std::cout << "Enter phone number: ";
		std::getline(std::cin, phone);
	}
	while (secret.empty())
	{
		std::cout << "Enter a dark secret: ";
		std::getline(std::cin, secret);
	}
	std::cout << std::endl;
	this->contacts[this->index % 8] = new Contact(first, last, nick, phone, secret);
	this->contacts[this->index % 8]->setIndex((this->index % 8) + 1);
	this->index++;
}

void	PhoneBook::search()
{
	std::string str;
	size_t		length;
	int 		index;
	Contact		*c1;
	
	c1 = NULL;
	if (this->index > 7)
		index = 8;
	else
		index = this->index % 8;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|Index     |First Name|Last Name |Nick Name |" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|" << this->contacts[i]->getIndex();
		for (int j = 1; j < 10; j++)
			std::cout << " ";
		std::cout << "|";
		if ((length = this->contacts[i]->getFirstName().length()) > 10)
		{
			str = this->contacts[i]->getFirstName().substr(0,9);
			std::cout << str << ".|";
		}
		else if (length < 10)
		{
			std::cout << this->contacts[i]->getFirstName();
			for (int j = length; j < 10; j++)
				std::cout << " ";
			std::cout << "|";
		}
		else
			std::cout << this->contacts[i]->getFirstName() << "|";
		if ((length = this->contacts[i]->getLastName().length()) > 10)
		{
			str = this->contacts[i]->getLastName().substr(0,9);
			std::cout << "|" << str << ".|";
		}
		else if (length < 10)
		{
			std::cout << this->contacts[i]->getLastName();
			for (int j = length; j < 10; j++)
				std::cout << " ";
			std::cout << "|";
		}
		else
			std::cout << this->contacts[i]->getLastName() << "|";
		if ((length = this->contacts[i]->getNickName().length()) > 10)
		{
			str = this->contacts[i]->getNickName().substr(0,9);
			std::cout << str << ".|";
		}
		else if (length < 10)
		{
			std::cout << this->contacts[i]->getNickName();
			for (int j = length; j < 10; j++)
				std::cout << " ";
			std::cout << "|";
		}
		else
			std::cout << "|" << this->contacts[i]->getNickName() << "|";
		std::cout << std::endl;
		std::cout << "---------------------------------------------" << std::endl;
	}
	str = "";
	while (str.empty() || (std::stoi(str) < 1 && std::stoi(str) > 8) || !c1)
	{
		std::cout << "Select Index for which user you want inforrmation: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str != "")
			for (int i = 0; i < index; i++)
				if (this->contacts[i]->getIndex() == std::stoi(str))
					c1 = this->getContact(i);
		if (!c1)
			std::cout << "Chose an existing index." << std::endl;
		else
		{
			std::cout << "Showing Information for contact index " << c1->getIndex() << std::endl;
			std::cout << "First Name: " << c1->getFirstName() << std::endl;
			std::cout << "Last Name: " << c1->getLastName() << std::endl;
			std::cout << "Nick Name: " << c1->getNickName() << std::endl;
			std::cout << "Phone Number: " << c1->getPhoneNumber() << std::endl;
			std::cout << "Dark Secret: " << c1->getDarkestSecret() << std::endl;
			std::cout << std::endl;
		}
	}
	
}

Contact *PhoneBook::getContact(int	index)
{
	return this->contacts[index % 8];
}