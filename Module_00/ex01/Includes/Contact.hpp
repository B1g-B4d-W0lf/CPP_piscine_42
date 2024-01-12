/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 19:17:06 by wfreulon          #+#    #+#             */
/*   Updated: 2024/01/11 18:33:27 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <stdlib.h>
#include <iostream>

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

	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;

};

#endif