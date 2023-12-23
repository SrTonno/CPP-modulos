/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:49:24 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 17:48:24 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++)
		materias_[i] = NULL;
	learned_ = 0;
}
MateriaSource::~MateriaSource(){
		for (int i = 0; i < 4; i++)
	{
		if (materias_[i])
			delete materias_[i];
	}
}

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	(void)other;
	return (*this);
}
void MateriaSource::learnMateria(AMateria* type)
{
	if (learned_ >= 4)
	{
		std::cout << "Ya has aprendido 4 Materias" << std::endl;
		delete type;
	}
	else
	{
		materias_[learned_] = type;
		learned_++;
		std::cout << learned_ << " Has aprendido la materia!!! " << type->getType() << std::endl;

	}
	}
AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4 && materias_[i]; i++)
	{
		if (materias_[i]->getType() == type)
		{
			return (materias_[i]->clone());
		}
	}
	return (NULL);
}
