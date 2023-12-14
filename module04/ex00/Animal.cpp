/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:46:05 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/09 16:40:40 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
: type("UNDEFINED"){}

Animal::Animal(const std::string &_type)
: type(_type){}

Animal::~Animal()
{}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

const	std::string	Animal::getType()	const{
	return(type);
}
void	Animal::makeSound() const
{
	std::cout << "Tipical undefined animal sound... ⁇" << std::endl;
}
