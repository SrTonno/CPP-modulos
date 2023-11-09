/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:25:44 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/09 17:40:33 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	contact;
	std::string	input;

	std::cout << "Bienbenido a PhoneBook\n" << std::endl;
	while (std::cin.fail() == false) {
		std::cout << "> ";
		//std::cin >> input;
		std::getline(std::cin, input);
		if (input == "ADD")
			contact.add_phone();
		else if (input == "SEARCH")
			contact.search_phone();
		else if (input == "EXIT")
			break ;
	}
	if (std::cin.fail() == true)
		std::cout << "\nERROR cin" << std::endl;
}
