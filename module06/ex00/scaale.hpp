/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scaale.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:20:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/13 16:42:46 by tvillare         ###   ########.fr       */
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
