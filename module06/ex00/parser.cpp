/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:34:08 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 13:32:01 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaale.hpp"

int isFloat(const std::string &str)
{
	int	i = 0;
	int	p = 0;

	if (str[0] == '+' || str[0] == '-')
		i++;
	while(str[i + 1] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] == '.' && p == 0)
				p = 1;
			else
				return (0);
		}
		i++;
	}
	if (str[i] != 'f')
		return (0);
	return(1);
}

int isInt(const std::string &str)
{
	int	i;

	i = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int isDouble(const std::string &str)
{
	int i = 0;
	int	p = 0;
	if (str[0] == '+' || str[0] == '-')
		i++;
	while(str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			if (str[i] == '.' && p == 0)
				p = 1;
			else
				return (0);
		}
		i++;
	}
	return(1);
}

int	isChar(const std::string &str)
{
	if (str.size() != 1)
		return (0);
	if (str[0] > 33 && str[0] < 127)
		return(1);
	return (0);
}

int	parser(const std::string &str)
{
	if (str == "-inf" || str == "+inf" | str == "nan")
		return (DOUBLE_SPECIAL);
	else if (str == "-inff" || str == "+inff" | str == "nanf")
		return (FLOAT_SPECIAL);
	else if (isFloat(str))
		return(FLOAT);
	else if (isInt(str))
		return(INT);
	else if (isDouble(str))
		return(DOUBLE);
	else if (isChar(str))
		return(CHAR);
	else
		return(ERROR);
}
