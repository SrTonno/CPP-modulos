/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:15 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/19 12:50:31 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
Dog::Dog()
:Animal(){
	std::cout << "DOG: Contrunstructor" << std::endl;
}

Dog::Dog(const std::string &_type)
:Animal(_type){
	std::cout << "DOG: Contrunstructor" << std::endl;
}

Dog::~Dog()
{
		std::cout << "DOG: Destrunstructor" << std::endl;
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "I`m Dog: guau guuaaauu??" << std::endl;
}
