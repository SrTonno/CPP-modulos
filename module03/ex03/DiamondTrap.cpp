/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:02:53 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 17:02:53 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string &name)
{
	_name = name;
	ClapTrap::_name = (name + "_clap_name");
	_HitPoints = FragTrap::_HitPoints;
	_AttackDamage = FragTrap::_AttackDamage;
	_EnergyPoints = ScavTrap::_EnergyPoints;
	std::cout << "Constructor DiamondTrap" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name <<"Destructor DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
: ClapTrap(other), ScavTrap(other), FragTrap(other){
	*this = other;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_HitPoints = other._HitPoints;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "name " << _name << " clap_name: " << ClapTrap::_name << std::endl;
}
