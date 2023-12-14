/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:55:59 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/14 18:39:23 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include "AMateria.hpp"
// # include "Character.hpp"

//class AMateria;
// class ICharacter;

class Cure: public AMateria
{
	public:
		Cure();
		Cure(std::string const &type);
		~Cure();
		Cure(const Cure &other);
		Cure	&operator=(const Cure &other);
		//[...]
		//std::string const & getType() const; //Returns the materia type
		AMateria* clone() const;
		void use(ICharacter& target);
};
