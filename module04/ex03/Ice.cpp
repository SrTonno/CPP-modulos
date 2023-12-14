/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 16:12:17 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:41:32 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(std::string const &type)
: AMateria(type) {}

Ice::Ice()
: AMateria("Ice") {}

Ice::~Ice(){}

Ice::Ice(const Ice &other)
: AMateria(other){}

Ice	&Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type_ = other.type_;
	return (*this);
}

std::string const & Ice::getType() const {
	return (type_);
}
AMateria* Ice::clone() const
{
	//Ice tmp;
	//tmp = *this;
	return (new Ice(*this));
}
void	Ice::use(ICharacter& target)
{
	std::cout << "• Ice: \"* shoots an ice bolt at " << target.getName() << " *\"" << std::endl;
}
