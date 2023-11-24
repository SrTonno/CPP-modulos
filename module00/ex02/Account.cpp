/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:11:07 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/24 14:50:44 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit ){
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout <<  "index:" <<_accountIndex
		<< ";amount:" << initial_deposit
		<< ";created" << std::endl;
	Account::_nbAccounts++;
}
Account::Account( void )
{
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = 0;
	Account::_nbAccounts += 1;
	Account::_displayTimestamp();
	std::cout <<  "index:" <<_accountIndex
		<< ";amount:" << 0
		<< ";created" << std::endl;
	Account::_nbAccounts++;
}
Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout <<  "index:" <<_accountIndex
		<< ";amount:" << _nbDeposits
		<< ";closed" << std::endl;
}

int	Account::getNbAccounts( void ){
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void ){
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
	return(Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
	Account::_displayTimestamp();

	std::cout << "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

void	Account::makeDeposit( int deposit ){
	_totalNbDeposits++;
	_nbDeposits++;
	_amount += deposit;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:"<< (_amount - deposit)
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	//std::cout << _amount << " ->"  <<  withdrawal << std::endl;
	if (withdrawal > _amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" << _accountIndex
			<< ";p_amount:"<< _amount
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_nbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << _amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << (_amount - withdrawal)
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_amount -= withdrawal;
	return (true);
}
int		Account::checkAmount( void ) const{
	return(_amount);
}
void	Account::displayStatus( void ) const{
	Account::_displayTimestamp();
	std::cout << "index:" <<  _accountIndex << ";amount:" << _amount
		<< ";deposits:" <<  _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}


void	Account::_displayTimestamp( void ){
	std::time_t tiempo_actual = std::time(nullptr);
	char buffer[20];
	std::tm* tiempo_info = std::localtime(&tiempo_actual);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tiempo_info);
	std::cout << "[" << buffer << "] ";
	//std::cout << "[19920104_091532] ";
}
