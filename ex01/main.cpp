/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anttorre <atormora@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 13:15:25 by anttorre          #+#    #+#             */
/*   Updated: 2024/05/15 15:49:58 by anttorre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PhoneBook.hpp"

/* void	ft_leaks()
{
	system("leaks -q phonebook");
} */

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
		for (int i = 0; i < (int)str.length(); i++)
			str[i] = std::toupper(str[i]);
		if (str == "ADD")
			phonebook.addContact();
		if (str == "SEARCH")
			phonebook.search();
		if (std::cin.eof())
			break;
	}
	return (0);
}