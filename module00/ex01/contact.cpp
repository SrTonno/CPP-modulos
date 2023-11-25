/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 16:50:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/25 17:25:52 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"



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
	while (std::cin.fail() == false) {
		phone_number = input_str("phone number");
		if (is_num(phone_number) == 1 && phone_number.size() == 9)
			break ;
	}
}

void Contact::print_contact(int i) {
	std::cout << std::setw(11) << i << "|";
	std::cout << std::setw(11) << formatString(name) << "|";
	std::cout << std::setw(11) << formatString(last_name) << "|";
	std::cout << std::setw(11) << formatString(nickname) << "|" << std::endl;
}

