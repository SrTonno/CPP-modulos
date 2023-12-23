/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:23:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 17:21:25 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type)
:type_(type){}
/*AMateria::AMateria()
:type_("INFINIDO"){}*/

AMateria::~AMateria(){}

AMateria::AMateria(const AMateria &other)
{
	//std::cout << "AANIMAL: copia" << std::endl;
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		type_ = other.type_;
	}
	return (*this);
}

std::string const & AMateria::getType() const {
	return (type_);
}
void	AMateria::use(ICharacter& target)
{
	std::cout << "• Materia: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
