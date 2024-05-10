/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:15:25 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/10 16:11:53 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phonebook;
	std::string	str;
	
	str = "";
	while (str != "EXIT")
	{
		std::cout << "Enter an option: " << std::endl;
		std::cout << "* ADD" << std::endl;
		std::cout << "* SEARCH" << std::endl;
		std::cout << "* EXIT" << std::endl;
		std::getline(std::cin, str);
		std::cout << std::endl;
		std::transform(str.begin(), str.end(), str.begin(), ::toupper);
		if (str == "ADD")
			phonebook.addContact();
		if (str == "SEARCH")
			phonebook.search();
	}
	return (0);
}