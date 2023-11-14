/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:36:58 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 13:45:32 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaale.hpp"
#include <cstdlib>

void	print_output(int i, float f, double d)
{
	std::cout << std::fixed << std::setprecision(2)
			<< "int:\t "<< i <<"\n"
			<< "float:\t " << f << "f \n"
			<< "double:\t " << d
			<< std::endl;
}

void	print_overflow(void)
{
	std::cout << std::fixed << std::setprecision(2)
			<< "int:\t overflow\n"
			<< "float:\t overflow \n"
			<< "double:\t overflow"
			<< std::endl;
}


void	print_char(char str) //esta mal
{
	if (str < 33 || str > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char:\t " << str << std::endl;
}

void especial_float(const std::string &str)
{
	std::cout << "char:\t impossible\n" \
			<< "int:\t impossible\n" \
			<< "float: " << str << "\n"  \
			<< "double: " << str.substr(0, str.size() - 1) \
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

void	this_char(std::string str)
{
	int		i;
	double	d;
	float	f;

	i = static_cast<int>(str[0]);
	d = static_cast<double>(i);
	f = static_cast<float>(i);

	print_char(i);
	print_output(i, f, d);
}

void	this_int(std::string str)
{
	int		i;
	double	d;
	float	f;

	i = std::atoi(str.c_str());
	d = static_cast<double>(i);
	f = static_cast<float>(i);

	print_char(i);
	print_output(i, f, d);
}

void	this_float(std::string str)
{
	int		i;
	double	d;
	float	f;

	f = std::atof(str.c_str());
	d = static_cast<double>(f);
	i = static_cast<int>(f);
	print_char(i);
	print_output(i, f, d);
}

void	this_double(std::string str)
{
	int		i;
	double	d;
	float	f;

	d = std::atof(str.c_str());
	f = static_cast<float>(d);
	i = static_cast<int>(d);
	print_char(d);
	print_output(i, f, d);
}


void	ft_print(const std::string &str, int type) //solucionar overflow
{
	if (type == FLOAT_SPECIAL)
		especial_float(str);
	else if (type == DOUBLE_SPECIAL)
		especial_double(str);
	else if (type == CHAR)
		this_char(str);
	else if (type == INT)
		this_int(str);
	else if (type == FLOAT)
		this_float(str);
	else if (type == DOUBLE)
		this_float(str);

}
