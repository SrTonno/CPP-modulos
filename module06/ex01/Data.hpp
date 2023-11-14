/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:00:23 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 18:40:19 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iomanip>
# include <string>
# include <stdint.h>
# include <iostream>

class Data
{
	public:
		int			i;
		char		*str;
		std::string	string;
		uintptr_t	serialize(Data* ptr);
		Data		*deserialize(uintptr_t raw);
};
