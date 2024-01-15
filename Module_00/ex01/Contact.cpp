/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:44:53 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/15 20:21:58 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/PhoneBook.hpp"
#include "Includes/Contact.hpp"
#include <stdlib.h>

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::DisplayContact(char i)
{
	std::cout << (i - 47) << "|";
	firstname.length() <= 10 ? std::cout << std::setw(10) << firstname : std::cout << firstname.substr(0, 9).replace(9, 9, ".");
	std::cout << "|";
	lastname.length() <= 10 ? std::cout << std::setw(10) << lastname : std::cout <<  lastname.substr(0, 9).replace(9, 9, ".");
	std::cout << "|";
	nickname.length() <= 10 ? std::cout << std::setw(10) << nickname : std::cout <<  nickname.substr(0, 9).replace(9, 9, ".");
	std::cout << "|\n";
}

void	Contact::DisplayInfos(void)
{
	std::cout << "First Name: " << firstname << std::endl;
	std::cout << "Last Name: " << lastname << std::endl;
	std::cout << "Nickname: " << nickname << std::endl;
	std::cout << "Number: " << phonenumber << std::endl;
	std::cout << "Darkest Secret: " << darkestsecret << std::endl;
}

int	Contact::ft_Alpha(std::string input)
{
	int	i = 0;
	
	while (input[i])
	{
		if (!isalpha(input[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int Contact::ft_Digit(std::string input)
{
	int	i = 0;
	
	while (input[i])
	{
		if (!isdigit(input[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

void	Contact::fillFirstName(void)
{
	std::string	input;
	
	std::cout << "Enter first name: ";
	while (std::getline(std::cin, input))
	{
		if (input.length() > 0 && ft_Alpha(input))
			break ;
		std::cout << "Invalid format, try again\n";
		std::cout << "Enter first name: ";
	}
	this->firstname = input;
}

void	Contact::fillLastName(void)
{
	std::string	input;
	
	std::cout << "Enter last name: ";
	while (std::getline(std::cin, input))
	{
		if (input.length() > 0 && ft_Alpha(input))
			break ;
		std::cout << "Invalid format, try again\n";
		std::cout << "Enter last name: ";
	}
	this->lastname = input;
}

void	Contact::fillNickName(void)
{
	std::string	input;
	
	std::cout << "Enter nickname: ";
	while (std::getline(std::cin, input))
	{
		if (input.length() > 0)
			break ;
		std::cout << "Invalid format, try again\n";
		std::cout << "Enter nickname: ";
	}
	this->nickname = input;
}

void	Contact::fillNumber(void)
{
	std::string	input;
	
	std::cout << "Enter phone number: ";
	while (std::getline(std::cin, input))
	{
		if (input.length() > 0 && input.length() <= 10 && ft_Digit(input))
			break ;
		std::cout << "Invalid format, try again\n";
		std::cout << "Enter phone number: ";
	}
	this->phonenumber = input;
}

void	Contact::fillSecret(void)
{
	std::string	input;
	
	std::cout << "Enter the secret: ";
	while (std::getline(std::cin, input))
	{
		if (input.length() > 0)
			break ;
		std::cout << "Invalid format, try again\n";
		std::cout << "Enter the secret: ";
	}
	this->darkestsecret = input;
}
