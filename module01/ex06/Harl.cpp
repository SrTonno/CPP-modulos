/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:40:41 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/14 16:42:55 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "“I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!“" << std::endl;
}

void	Harl::info( void ){
	std::cout << "“I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!”" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "“I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.”" << std::endl;
}

void	Harl::error( void ) {
	std::cout << "“This is unacceptable! I want to speak to the manager now.”" << std::endl;
}

enum ComplainLevel {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

ComplainLevel stringToEnum(const std::string &level)
{
	if (level == "debug") return DEBUG;
	if (level == "info") return INFO;
	if (level == "warning") return WARNING;
	if (level == "error") return ERROR;
	return UNKNOWN;
}

void	Harl::complain( std::string level ) {
	switch(stringToEnum(level))
	{
		case DEBUG:
			this->debug();
		case INFO:
			this->info();
		case WARNING:
			this->warning();
		case ERROR:
			this->error();
		case UNKNOWN:
			break;
	}
}
