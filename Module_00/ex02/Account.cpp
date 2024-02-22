/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfreulon <wfreulon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 20:08:23 by wfreulon          #+#    #+#             */
/*   Updated: 2024/02/22 18:41:56 by wfreulon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

static int	totalacc = 0;
static int	totalam = 0;
static int	totaldep = 0;
static int	totalwith = 0;

void	displayTime(void)
{
	std::time_t now;

    now = std::time(NULL);

    std::tm *tm_info = std::localtime(&now);

    char buffer[80];
    std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S] ", tm_info);
    std::cout << buffer;
}

Account::Account(int initial_deposit)
{
	totalam += initial_deposit;
	displayTime();
	std::cout << "index:" << totalacc << ";amount:" << initial_deposit << ";created" << std::endl;
	this->_accountIndex = totalacc;
	totalacc += 1;
	this->_amount = initial_deposit;
	return ;
}

Account::~Account( void )
{
	displayTime();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
	return ;
}

void	Account::displayAccountsInfos( void )
{
	displayTime();
	std::cout << "accounts:" << totalacc << ";total:" << totalam << ";deposits:" << totaldep << ";withdrawals:" << totalwith << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	displayTime();
	totaldep += 1;
	totalam += deposit;
	this->_nbDeposits += 1;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	this->_amount += deposit;
	return ;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	displayTime();
	if (withdrawal < _amount)
	{
		totalwith += 1;
		this->_nbWithdrawals += 1;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
		totalam -= withdrawal;
		this->_amount -= withdrawal;
		return (0);
	}
	else 
	{
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
		return (1);
	}
	
	return (1);
}

void	Account::displayStatus( void ) const
{
	displayTime();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
