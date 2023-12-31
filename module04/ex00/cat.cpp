/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:08 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/19 12:49:45 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
Cat::Cat()
:Animal(){
	std::cout << "CAT: Contrunstructor" << std::endl;
}

Cat::Cat(const std::string &_type)
:Animal(_type){
	std::cout << "CAT: Contrunstructor" << std::endl;

}

Cat::~Cat()
{
	std::cout << "CAT: Destrunstructor" << std::endl;

}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "I`m cat: miau miiauuu??" << std::endl;
}
