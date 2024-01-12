/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 20:44:53 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/11 18:45:27 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Includes/PhoneBook.hpp"
#include "Includes/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
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
		if (input.length() < 10 && !ft_Alpha(input))
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
