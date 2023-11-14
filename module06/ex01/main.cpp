/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:31:06 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 18:41:00 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Data.hpp"

int	main()
{
	Data		*start = new Data;
	uintptr_t	producto;
	Data		*end = NULL;

	start->string = "HOLA mundo :)";
	start->i = 42;
	producto = start->serialize(start);
	end = start->deserialize(producto);
	std::cout << "start: " << start->string << "int " << start->i << std::endl;
	std::cout << "producto: " << producto << std::endl;
	std::cout << "end: " << end->string << "int " << end->i << std::endl;
}
