/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 22:52:24 by wfreulon          #+#    #+#             */
/*   Updated: 2023/12/22 22:59:02 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	int i = 0;
	int	j;

	if (ac == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++i < ac)
		{
			j = 0;
			while (av[i][j])
				std::cout<< (char)toupper(av[i][j++]);
		}
	}
	return (0);
}
