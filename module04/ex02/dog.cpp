/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:15 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/22 18:57:53 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
Dog::Dog()
:AAnimal(){
	std::cout << "DOG: constructor" << std::endl;
	brain = new Brain();
}

Dog::Dog(const std::string &_type)
:AAnimal(_type){
	std::cout << "DOG: constructor" << std::endl;
	brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "DOG: descontructor" << std::endl;
	delete brain;
}

Dog::Dog(const Dog &other)
{
	std::cout << "DOG: copia" << std::endl;
	brain = NULL;
	*this = other;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type = other.type;
		if (brain)
			delete brain;
		brain = new Brain(*other.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "I`m Dog: guau guuaaauu??" << std::endl;
}

void	Dog::set_called(const std::string &idea, int id)
{
	brain->set_called(idea, id);
}

std::string		Dog::get_called(int id){
	return(brain->get_called(id));
}
