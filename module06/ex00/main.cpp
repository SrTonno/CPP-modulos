/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 16:32:10 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 15:40:19 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "scaale.hpp"

int main(int argc, char **argv)
{
	std::string str;
	int	type;

	if (argc != 2)
		return (0);
	str = argv[1];
	type = parser(str);
	ft_print(str, type);
}
