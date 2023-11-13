/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:36:58 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/13 19:12:18 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaale.hpp"
#include <cstdlib>

void	print_char(char str) //esta mal
{
	if (str > 33 && str < 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << str << std::endl;
}

void especial_float(const std::string &str)
{
	std::cout << "char:\t impossible\n" \
			<< "int:\t impossible\n" \
			<< "float: " << str << "\n"  \
			<< "double: " str.substr(0, str.size() - 1) \
			<< std::endl;
}

void especial_double(const std::string &str)
{
	std::cout << "char:\t impossible\n"
			<< "int:\t impossible\n"
			<< "float: " << str << "f\n"
			<< "double: " <<  str
			<< std::endl;
}

void this_char(std::string str)
{
	int		i;
	double	d;
	float	f;

	i = std::atoi(str.c_str());
	d = static_cast<double>(i);
	f = static_cast<float>(i);

	print_char(i);
	std::cout << "int:\t "<< i <<"\n" \
			<< "float: " << f << " \n" \
			<< "double: " << d << " \n" \
			<< std::endl;
}

void this_int(const std::string &str)
{
	print_char(str.);
	std::cout << "int:\t "<<static_cast<int>str[0] <<"\n" \
			<< "float: " << static_cast<float>str[0] << " \n" \
			<< "double: " << static_cast<double>str << " \n" \
			<< std::endl;
}



void	print(const std::string &str, int type)
{
	if (type == FLOAT_SPECIAL)
}
