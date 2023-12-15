/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 18:51:50 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 20:47:58 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
Cure::Cure(std::string const &type)
: AMateria(type){}

Cure::Cure()
: AMateria("cure"){}

Cure::~Cure(){}

Cure::Cure(const Cure &other)
:AMateria(other) {}

Cure	&Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

/*std::string const & Cure::getType() const {
	return (type_);
}*/
AMateria* Cure::clone() const
{
	//Cure tmp;
	//tmp = *this;
	return (new Cure(*this));
}
void	Cure::use(ICharacter& target)
{
	std::cout << "• Cure: \"* heals "<< type_ << "’s wounds *\"" << target.getName() << " *\"" << std::endl;
}
