/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 19:03:04 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/03 18:44:22 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <cstdlib>

std::string	input_str(std::string action)
{
	std::string	name;

	while (1){
		std::cout << "Dime tu " << action << ": ";
		std::getline(std::cin, name);
		if (!name.empty())
			break ;
	}
	return name;
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

int	input_int()
{
	std::string	input;
	while (1){
		std::cout << "que indice quieres ? ";
		std::getline(std::cin, input);
		if (!input.empty())
			break ;
	}

	return (atoi(input.c_str()));
}

void	Contact::print_full_contact()
{
	std::cout << first_name << " | ";
	std::cout << last_name << "| ";
	std::cout << name << " | ";
	std::cout << nickname << " | ";
	std::cout << darkest_secret << " | ";
	std::cout << phone_number << std::endl;
}

void Contact::add_contact()
{
	first_name = input_str("fisrt name");
	last_name = input_str("last name");
	name = input_str("name");
	nickname = input_str("nickname");
	darkest_secret = input_str("darkest secret");
	while (1) {
		phone_number = input_str("phone number");
		if (is_num(phone_number) == 1 && phone_number.size() == 9)
			break ;
	}
}

void Contact::print_contact() {
	std::cout << '|' << name << '|' << last_name << '|' << nickname << std::endl;
}

void PhoneBook::add_phone() {
	name[last % 8].add_contact();
	last++;
}

void PhoneBook::search_phone() {
		int	i;
	int	num;

	i = 0;
	while (i < last && i < 8){
		std::cout << (i + 1);
		name[i++].print_contact();
	}
	num = input_int();
	if (0 < num && num < 8 && last != 0)
		name[num - 1].print_contact();
}