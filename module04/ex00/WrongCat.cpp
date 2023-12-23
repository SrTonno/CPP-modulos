/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 15:21:19 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 15:30:26 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "WrongCat.hpp"

WrongCat::WrongCat()
:WrongAnimal(){
	std::cout << "WrongCat: Contrunstructor" << std::endl;
}

WrongCat::WrongCat(const std::string &_type)
:WrongAnimal(_type){
	std::cout << "WrongCat: Contrunstructor" << std::endl;

}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat: Destrunstructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "I`m WrongCat: miau miiauuu??" << std::endl;
}
