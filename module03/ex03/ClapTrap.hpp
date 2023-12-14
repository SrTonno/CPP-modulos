/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:19:15 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 12:24:11 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_HitPoints;
		int			_EnergyPoints;
		int			_AttackDamage;
	public:
		ClapTrap(const std::string &name);
		ClapTrap();
		ClapTrap(const ClapTrap &other);
		~ClapTrap();
		ClapTrap	&operator=(const ClapTrap &other);
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
};

