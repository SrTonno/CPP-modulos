/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:38:07 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 18:22:50 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(const std::string &name)
	: name_(name){
		for (int i = 0; i < 4; i++)
			inventary_[i] = NULL;
		for (int i = 0; i < 50; i++)
			backpack_[i] = NULL;
	unEquip_ = 0;
}

Character::~Character(){
	for (int i = 0; i < 4; i++)
		delete inventary_[i];
	for (int i = 0; i < 50; i++)
		delete backpack_[i];
}

Character::Character(const Character &other)
{
	*this = other;
}

Character	&Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name_ = other.name_;
		this->unEquip_ = other.unEquip_;
		for (int i = 0; i < 4; i++)
			this->inventary_[i] = other.inventary_[i];
		for (int i = 0; i < 50; i++)
			this->backpack_[i] = other.backpack_[i];
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
	delete m;
	std::cout << "No tienes espacios disponibles :(" << std::endl;
}

void Character::unequip(int idx){
	if (unEquip_ < 50)
	{
		backpack_[unEquip_++] = inventary_[idx];
		inventary_[idx] = NULL;
	}
	else {
		std::cout << "No puedes desequipar mas Materias (:" << std::endl;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx > 3)
		return ;
	if (inventary_[idx] != NULL)
		inventary_[idx]->use(target);
}
