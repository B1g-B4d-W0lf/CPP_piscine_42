/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:34:08 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/15 20:27:16 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/PhoneBook.hpp"
#include "Includes/Contact.hpp"
#include <stdlib.h>
PhoneBook::PhoneBook(void)
{
	index = 0;
	total = 0;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::seekContact(void)
{
	int			i = 0;
	int			j;
	std::string	input;
	
	if (!total)
		std::cout << "No contacts" << std::endl;
	else if (total)
	{
		std::cout << "Index | First Name | Last Name | Nickname |" << std::endl;
		while (i < index)
		{
			contact[i].DisplayContact(i + '0');
			i++;
		}
		std::cout << "Type the index number to display contact infos: " << std::endl;
		while (std::getline(std::cin, input))
		{
			j = atoi(input.c_str());
			if (j >= 1 && j <= index)
				break ;
			std::cout << "Incorrect number, try again: " << std::endl;
		}
		contact[j].DisplayInfos();
	}
}

void	PhoneBook::addContact(void)
{
	total += 1;
	if (index == 8)
		index = 0;
	contact[index].fillFirstName();
	contact[index].fillLastName();
	contact[index].fillNickName();
	contact[index].fillNumber();
	contact[index].fillSecret();
	index++;
	
	return ;
}