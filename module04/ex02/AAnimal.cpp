/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:02:32 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/05 14:02:33 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "AAnimal.hpp"


AAnimal::AAnimal()
: type("UNDEFINED"){
	std::cout << "AANIMAL: contructor" << std::endl;
}

AAnimal::AAnimal(const std::string &_type)
: type(_type){
	std::cout << "AANIMAL: contructor" << std::endl;
}

AAnimal::~AAnimal()
{
	std::cout << "AANIMAL: descontructor" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	std::cout << "AANIMAL: copia" << std::endl;
	*this = other;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

const	std::string	AAnimal::getType()	const{
	return(type);
}
void	AAnimal::makeSound() const
{
	std::cout << "Tipical undefined Aanimal sound... ⁇" << std::endl;
}
