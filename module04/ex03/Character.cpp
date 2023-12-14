/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:38:07 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:17:17 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
	: name_(name){}

Character::~Character(){}

Character::Character(const Character &other)
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		for (int i = 0; i < 4; i++)
			this->inventary_[i] = other.inventary_[i];
	}
	return (*this);
}

std::string const &Character::getName() const {
	return (name_);
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++)
	{
		if (inventary_[i] == NULL)
		{
			inventary_[i] = m;
			return ;
		}
	}
	std::cout << "No tienes espacios disponibles :(" << std::endl;
}

void Character::unequip(int idx){
	inventary_[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3)
		return ;
	inventary_[idx]->use(target);
}

