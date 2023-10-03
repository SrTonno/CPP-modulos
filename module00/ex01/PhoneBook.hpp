/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 12:23:52 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/03 17:03:00 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP
//#pragma once
#include <string>
#include <iostream>

typedef struct s_contact
{
	std::string first_name;
	std::string last_name;
	std::string name;
	std::string nickname;
	std::string	darkest_secret;
	std::string	phone_number;
}	t_contact;


class PhoneBook {
	private:
		t_contact name[8];
		int			last;
	public:
		PhoneBook() : last(0) {}
		void		search_contact();
		void		add_contact();
};
void add_contact();
void search_contact();
#endif
