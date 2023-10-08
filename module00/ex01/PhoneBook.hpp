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
/*
typedef struct s_contact
{
	std::string first_name;
	std::string last_name;
	std::string name;
	std::string nickname;
	std::string	darkest_secret;
	std::string	phone_number;
}	t_contact;*/

class Contact {
	private:
		std::string first_name;
		std::string last_name;
		std::string name;
		std::string nickname;
		std::string	darkest_secret;
		std::string	phone_number;
	public:
		void		print_full_contact();
		void		print_contact();
		void		add_contact();
};

class PhoneBook {
	private:
		Contact name[8];
		int			last;
	public:
		PhoneBook() : last(0) {}
		void		search_phone();
		void		add_phone();
};
void add_contact();
void search_contact();
#endif
