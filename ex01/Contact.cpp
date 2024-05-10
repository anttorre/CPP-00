/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 13:41:08 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/08 17:13:01 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

Contact::Contact(std::string firstname, std::string lastname, std::string nickname, std::string phonenumber, std::string darkestsecret)
{
	this->firstName = firstname;
	this->lastName = lastname;
	this->nickName = nickname;
	this->phoneNumber = phonenumber;
	this->darkestSecret = darkestsecret;
}

std::string Contact::getFirstName(void)
{
	return this->firstName;
}

std::string Contact::getLastName(void)
{
	return this->lastName;
}

std::string Contact::getNickName(void)
{
	return this->nickName;
}

std::string Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

std::string Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}

int			Contact::getIndex(void)
{
	return this->index;
}

void		Contact::setIndex(int index)
{
	this->index = index;
}