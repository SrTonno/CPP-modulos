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

void	input_str(std::string action, std::string *save)
{
	std::string	name;

	while (1){
		std::cout << "Dime tu " << action << ": ";
		std::getline(std::cin, name);
		if (!name.empty())
			break ;
	}
	*save = name;
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
	int			num;

	while (1){
		std::cout << "que indice quieres ? ";
		std::getline(std::cin, input);
		if (!input.empty())
			break ;
	}
	num = std::stoi(input);
	return (num);
}

void	print_contact(t_contact *conta)
{
	std::cout << conta->first_name << " | ";
	std::cout << conta->last_name << "| ";
	std::cout << conta->name << " | ";
	std::cout << conta->nickname << " | ";
	std::cout << conta->darkest_secret << " | ";
	std::cout << conta->phone_number << std::endl;
}

void PhoneBook::add_contact()
{
	input_str("fisrt name", &name[last % 8].first_name);
	input_str("last name", &name[last % 8].last_name);
	input_str("name", &name[last % 8].name);
	input_str("nickname", &name[last % 8].nickname);
	input_str("darkest secret", &name[last % 8].darkest_secret);
	while (1) {
		input_str("phone number", &name[last % 8].phone_number);
		if (is_num(name[last % 8].phone_number) == 1 && name[last % 8].phone_number.size() == 9)
			break ;
	}
	last++;
}

void PhoneBook::search_contact()
{
	int	i;
	int	num;

	i = 0;
	while (i < last && i < 8){
		std::cout << (i + 1) << '|' << name[i].name << '|' << name[i].last_name << '|' << name[i].nickname << std::endl;
		i++;
	}
	num = input_int();
	if (0 < num && num < 8 && last != 0)
		print_contact(&name[num - 1]);
}
