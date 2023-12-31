/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:02:55 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 17:01:37 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap:  public ScavTrap, public FragTrap
{
	private:
		std::string _name;
	public:
		DiamondTrap(const std::string &name);
		~DiamondTrap();
		DiamondTrap(const DiamondTrap &other);
		DiamondTrap	&operator=(const DiamondTrap &other);
		using		ScavTrap::attack;
		void		whoAmI();
};


