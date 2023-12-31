/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:55:56 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:34:36 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"
# include "ICharacter.hpp"

// class AMateria;
class ICharacter;

class Ice: public AMateria
{
	public:
		Ice();
		Ice(std::string const &type);
		~Ice();
		Ice(const Ice &other);
		Ice	&operator=(const Ice &other);
		//[...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};
