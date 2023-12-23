/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:18:02 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 15:18:22 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
: type("UNDEFINED"){
	std::cout << "WrongAnimal: Contrunstructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &_type)
: type(_type){
	std::cout << "WrongAnimal: Contrunstructor" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal: Destrunstructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

const	std::string	WrongAnimal::getType()	const{
	return(type);
}
void	WrongAnimal::makeSound() const
{
	std::cout << "Tipical undefined WrongAnimal sound... ⁇" << std::endl;
}
