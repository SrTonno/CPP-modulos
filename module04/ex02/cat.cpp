/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:08 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/22 18:47:06 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"
Cat::Cat()
:AAnimal(){
	std::cout << "CAT: contructor" << std::endl;
	brain = new Brain();
}

Cat::Cat(const std::string &_type)
:AAnimal(_type){
	std::cout << "CAT: contructor" << std::endl;
	brain = new Brain();
}

Cat::~Cat(){
	std::cout << "CAT: descontructor" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &other)
{
	std::cout << "CAT: copia" << std::endl;
	brain = NULL;
	*this = other;
}

Cat &Cat::operator=(const Cat &other)
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

void	Cat::makeSound() const
{
	std::cout << "I`m cat: miau miiauuu??" << std::endl;
}

void	Cat::set_called(const std::string &idea, int id)
{
	brain->set_called(idea, id);
}

std::string		Cat::get_called(int id){
	return(brain->get_called(id));
}
