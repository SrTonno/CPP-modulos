/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:29:28 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/29 15:12:57 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap(const std::string &name)
: ClapTrap(name) {
	//_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Constructor ScavTrap" << std::endl;
}


ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		std::cout << "ScavTrap "<< _name << " attacks " << target << ", causing " << _AttackDamage << "points of damage!" << std::endl;
		_EnergyPoints--;
	}
}
void	ScavTrap::guardGate( void )
{
	if (_HitPoints > 0)
	{
		std::cout << "ScavTrap "<< _name << "is on guard" << std::endl;
	}
}
ScavTrap::ScavTrap(const ScavTrap &other)
:ClapTrap(other){}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_HitPoints = other._HitPoints;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
	}
	return (*this);
}
