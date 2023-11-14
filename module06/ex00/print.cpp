/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 17:36:58 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 16:08:51 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaale.hpp"
#include <cstdlib>

void	print_output(float f, double d)
{
	std::cout << std::fixed << std::setprecision(2)
			<< "float:\t " << f << "f \n"
			<< "double:\t " << d
			<< std::endl;
}


void	write_int(double d)
{
	int	i;

	if (d > 2147483647.0)
		std::cout << "int:\t Overflow" << std::endl;
	else if (d < -2147483648.0)
		std::cout << "int:\t Underflow" << std::endl;
	else
	{
		i = static_cast<int>(d);
		std::cout << "int:\t " << i << std::endl;
	}
}

void	write_char(char str) //esta mal
{
	if (str < 33 || str > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char:\t " << str << std::endl;
}

void especial_float(const std::string &str)
{
	std::cout << "char:\t impossible\n"
			<< "int:\t impossible\n"
			<< "float: " << str << "\n"
			<< "double: " << str.substr(0, str.size() - 1)
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

	write_char(i);
	write_int(i);
	print_output(f, d);
}
/*
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
}*/

void	this_double(std::string str)
{
	//int		i;
	double	d;
	float	f;

	d = std::atof(str.c_str());
	f = static_cast<float>(d);
	//i = static_cast<int>(d);

	write_char(d);
	write_int(d);
	print_output(f, d);
}


void	ft_print(const std::string &str, int type)
{
	if (type == FLOAT_SPECIAL)
		especial_float(str);
	else if (type == DOUBLE_SPECIAL)
		especial_double(str);
	else if (type == CHAR)
		this_char(str);
	else if (type != ERROR)
		this_double(str);

}
