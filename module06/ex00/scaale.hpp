/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scaale.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 13:15:12 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <cstdlib>
# include <iomanip>
# include <string>
# include <math.h>

typedef enum e_types {
	FLOAT_SPECIAL,
	DOUBLE_SPECIAL,
	INT,
	DOUBLE,
	FLOAT,
	CHAR,
	ERROR
} t_types;

void ft_print(const std::string &str, int type);
int	parser(const std::string &str);
