/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 18:25:44 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/25 17:05:55 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void PhoneBook::add_phone() {
	name[last % 8].add_contact();
	last++;
}

void PhoneBook::search_phone() {
	unsigned int	i;
	unsigned int	num;

	i = 0;
	while (i < last && i < 8){
		name[i].print_contact((i + 1));
		i++;
	}
	num = input_int();
	if (0 < num && num < 8 && last >= num)
		name[num - 1].print_full_contact();
}
