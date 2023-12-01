/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:40:41 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/01 13:34:42 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void ) {
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "(debug)“I love having extra bacon for my 7XL-double-cheese-triple-picklespecial-ketchup burger. I really do!“" << std::endl;
}

void	Harl::info( void ){
	std::cout << "[INFO]" << std::endl;
	std::cout << "(info)“I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!”" << std::endl;
}

void	Harl::warning( void ) {
	std::cout << "[WARNING]" << std::endl;
	std::cout << "(warning)“I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.”" << std::endl;
}

void	Harl::error( void ) {
	std::cout << "[ERROR]" << std::endl;
	std::cout << "(error)“This is unacceptable! I want to speak to the manager now.”" << std::endl;
}
void	Harl::unknown( void ) {
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

ComplainLevel	Harl::stringToEnum(const std::string &level)
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
			break;
		case UNKNOWN:
			this->unknown();
	}
}
