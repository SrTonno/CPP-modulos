/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 12:11:07 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/22 20:19:50 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
# include <iostream>
# include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

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
	<< ";withdrawals:" << Account::_totalNbDeposits
	<< std::endl;
	/*std::cout << "[19920104_091532] index:" << Account::_nbAccounts //?
	<< ";p_amount:" << Account::_nbAccounts
	<< ";withdrawal:" << Account::_totalNbWithdrawals
	<< ";amount:" << Account::_nbAccounts
	<< ";nb_withdrawals:1" << std::endl;*/
}

Account::Account( int initial_deposit ){
	_accountIndex = Account::_nbAccounts;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_amount = initial_deposit;
	Account::_nbAccounts =+ initial_deposit;
	Account::_displayTimestamp();
	std::cout <<  "index:" <<_accountIndex << ";amount:" <<initial_deposit << ";created" << std::endl;
	Account::_nbAccounts++;
}
Account::~Account( void ){
	Account::_displayTimestamp();
	std::cout <<  "index:" <<_accountIndex << ";amount:" << _nbDeposits << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit ){
	_totalNbDeposits++;
}
bool	Account::makeWithdrawal( int withdrawal );
int		Account::checkAmount( void ) const{
	return(_amount);
}
void	Account::displayStatus( void ) const{
	std::time_t tiempo_actual = std::time(nullptr);
	char buffer[20];
	std::tm* tiempo_info = std::localtime(&tiempo_actual);
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", tiempo_info);
	std::cout << "[" << buffer << "]";
}
