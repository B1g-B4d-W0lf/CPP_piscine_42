/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:14:12 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/15 19:53:59 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <iomanip>

class Contact
{
	public:
		Contact(void);
		~Contact(void);
		void	fillFirstName(void);
		void	fillLastName(void);
		void	fillNickName(void);
		void	fillNumber(void);
		void	fillSecret(void);
		int		ft_Alpha(std::string input);
		int		ft_Digit(std::string input);
		void	DisplayContact(char i);
		void	DisplayInfos(void);

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;

};

#endif