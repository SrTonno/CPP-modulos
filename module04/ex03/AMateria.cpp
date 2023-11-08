/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:23:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/05 14:48:26 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
:type_(type){}

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria &other)
{
	std::cout << "AANIMAL: copia" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type_ = other.type_;
	}
	return (*this);
}
