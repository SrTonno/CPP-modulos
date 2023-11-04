/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:46:05 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 16:54:30 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Animal::Animal()
: type("UNDEFINED"){
	std::cout << "ANIMAL: contructor" << std::endl;
}

Animal::Animal(const std::string &_type)
: type(_type){
	std::cout << "ANIMAL: contructor" << std::endl;
}

Animal::~Animal()
{
	std::cout << "ANIMAL: descontructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "ANIMAL: copia" << std::endl;
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
