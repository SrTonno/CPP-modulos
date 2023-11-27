/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 17:10:49 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/27 18:49:00 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once
# include <string>
# include <iostream>
# include <cstdlib>
# include <iomanip>

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
		void		print_contact(int i);
		void		add_contact();
};
int			input_int();
std::string	formatString(const std::string &input);
std::string	input_str(std::string action);
int			is_num(std::string str);
int			standar_char(std::string str);
