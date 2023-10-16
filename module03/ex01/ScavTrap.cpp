/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:29:28 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/16 19:36:32 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
• Hit points (100), represent the health of the ClapTrap
• Energy points (50)
• Attack damage (20)
*/
ScavTrap::ScavTrap(const std::string &name)
: _name(name),
  _HitPoints(10),
  _EnergyPoints(10),
  _AttackDamage(0){}
{
}

ScavTrap::~ScavTrap()
{}
