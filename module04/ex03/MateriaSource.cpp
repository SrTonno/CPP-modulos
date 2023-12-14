/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:49:24 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:40:23 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){}
MateriaSource::~MateriaSource(){};

MateriaSource::MateriaSource(const MateriaSource &other) {
	*this = other;
}
MateriaSource	&MateriaSource::operator=(const MateriaSource &other)
{
	(void)other;
	return (*this);
}
