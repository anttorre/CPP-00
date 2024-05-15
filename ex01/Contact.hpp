/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:38:06 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/15 15:02:35 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class Contact
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNumber;
	std::string darkestSecret;
	int			index;
	
	public:
	Contact(void);
	Contact(std::string firstname, std::string lastname, std::string nickname, \
	std::string phonenumber, std::string darkestsecret);
	~Contact(void);

	/* Getters */
	std::string	getFirstName(void);
	std::string	getLastName(void);
	std::string	getNickName(void);
	std::string	getPhoneNumber(void);
	std::string	getDarkestSecret(void);
	int			getIndex(int index);

	/* Setters */
	void		setIndex(int index);
};

#endif