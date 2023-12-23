/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 17:39:16 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 18:02:31 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
# include <iostream>
# include <string>
# include "ICharacter.hpp"

// class AMateria;
// class ICharacter;

class Character: public ICharacter
{
	private:
		std::string	name_;
		AMateria	*inventary_[4];
		AMateria	*backpack_[50];
		int			unEquip_;
	public:
		Character(const std::string &name);
		virtual ~Character();
		Character(const Character &other);
		Character	&operator=(const Character &other);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
