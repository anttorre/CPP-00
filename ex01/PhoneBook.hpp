/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 12:38:08 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/08 16:18:52 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include "Contact.hpp"

class PhoneBook
{
	private:
		Contact *contacts[8];
		int		index;

	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	search(void);
		Contact	*getContact(int index);
};

#endif