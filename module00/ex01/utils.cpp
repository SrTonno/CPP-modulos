/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:12:30 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/01 16:10:01 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Contact.hpp"

std::string	formatString(const std::string &input) {
	if (input.size() > 10) {
		return input.substr(0, 9) + ".";
	}
	return input;
}

std::string	input_str(std::string action)
{
	std::string	name;

	while (std::cin.fail() == false){
		std::cout << "Dime tu " << action << ": ";
		std::getline(std::cin, name);
		if (!name.empty() && standar_char(name) == 1)
			return name;
	}
	return ("");
}

int	is_num(std::string str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0') {
		if (!std::isdigit(str[i]))
			return(0);
	}
	return (1);
}

int	standar_char(std::string str)
{
	int	i;

	i = -1;
	while(str[++i] != '\0')
		if (str[i] < 0 || str[i] > 127)
			return (0);
	return (1);

}
int	input_int()
{
	std::string	input;
	while (std::cin.fail() == false){
		std::cout << "que indice quieres ? ";
		std::getline(std::cin, input);
		if (!input.empty())
			break ;
	}

	return (atoi(input.c_str()));
}
