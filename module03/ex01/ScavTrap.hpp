/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:29:39 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 15:42:07 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
	public:
		ScavTrap(const std::string &name);
		~ScavTrap();
		ScavTrap(const ScavTrap &other);
		ScavTrap	&operator=(const ScavTrap &other);
		void		guardGate(void);
		void		attack(const std::string& target);

};


