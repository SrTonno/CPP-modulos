/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:40:52 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/28 16:13:13 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl harl;
	std::cout << "error" << std::endl;
	harl.complain("error");
	std::cout << "info" << std::endl;
	harl.complain("info");
	std::cout << "debug" << std::endl;
	harl.complain("debug");
	std::cout << "warning" << std::endl;
	harl.complain("warning");
	return (0);
}
