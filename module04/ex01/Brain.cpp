/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:09:44 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/17 19:59:30 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void){
	std::cout << "Brain: contructor" << std::endl;
}

Brain::~Brain(){
	std::cout << "Brain: descontructor" << std::endl;
}

Brain::Brain(const Brain &other){
	std::cout << "Brain: copia" << std::endl;
	*this = other;
}

Brain	&Brain::operator=(const Brain &other)
{
	std::cout << "Brain: operador =" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			called[i] = other.called[i];
	}
	return (*this);
}

void	Brain::set_called(std::string idea, int id)
{
	if (id < 0 || id > 99) {
		std::cout << "Error:\n id incorrecto!!" << std::endl;
		return ;
	}
	called[id] = idea;
}

std::string	Brain::get_called(int id)
{
	if (id < 0 || id > 99){
		std::cout << "Error:\n id incorrecto!!" << std::endl;
		return (NULL);
	}
	return (called[id]);
}
