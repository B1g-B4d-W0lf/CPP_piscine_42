/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:34:08 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/12 01:40:52 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/PhoneBook.hpp"
#include "Includes/Contact.hpp"

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
	
}

void	PhoneBook::addContact(void)
{
	total += 1;
	index ++;
	contact[index].fillFirstName();
	contact[index].fillLastName();
	contact[index].fillNickName();
	contact[index].fillNumber();
	contact[index].fillSecret();
	return ;
}