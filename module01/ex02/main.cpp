/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 16:08:45 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/13 18:01:50 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	var;
	std::string	*stringPTR;
	std::string	&stringREF = var;

	var = "HI THIS IS BRAIN";
	stringPTR = &var;
	std::cout << "->Direcion de memoria" << std::endl;
	std::cout << "var:" << &var << std::endl;
	std::cout << "stringPTR:" << stringPTR << std::endl;
	std::cout  << "stringREF:" << &stringREF << std::endl;
	std::cout << "->valor" << std::endl;
	std::cout << "var:" << var << std::endl;
	std::cout << "stringPTR:" << *stringPTR << std::endl;
	std::cout  << "stringREF:" << stringREF << std::endl;
}
