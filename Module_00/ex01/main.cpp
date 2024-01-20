/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:42:37 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/20 19:33:24 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/PhoneBook.hpp"
#include "Includes/Contact.hpp"

int	main(void)
{
	std::string	input;
	PhoneBook	book;
	
	std::cout << "Hello, welcome to your phonebook" << std::endl;
	std::cout << "The different commands are:" << std::endl;
	std::cout << "EXIT, ADD and SEARCH" << std::endl;
	std::cout << "Please, enter one:" << std::endl;
	while (getline(std::cin, input))
	{
		if (input == "ADD")
			book.addContact();
		else if (input == "SEARCH")
			book.seekContact();
		else if (input == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
		std::cout << "Please, enter a command:" << std::endl;
		std::cout << "EXIT, ADD and SEARCH" << std::endl;
	}
	if (std::cin.eof())
			exit(0);
	return (0);
}