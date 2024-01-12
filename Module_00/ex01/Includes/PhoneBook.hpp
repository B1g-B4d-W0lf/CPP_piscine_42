/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 17:34:15 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/12 01:39:55 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void	addContact(void);
		void	seekContact(void);
	
	private:
		int		index;
		int		total;
		Contact	contact[8];
};

#endif