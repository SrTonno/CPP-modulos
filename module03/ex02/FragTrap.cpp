/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:43 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 16:11:16 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string &name)
: ClapTrap(name) {
	_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 30;
	std::cout << _name << " Constructor FragTrap" << std::endl;
}


FragTrap::~FragTrap() {
	std::cout << _name << " Destructor FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys( void )
{
	if (_HitPoints > 0)
	{
		std::cout << "FragTrap "<< _name << " highFivesGuys" << std::endl;
	}
}

void	FragTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints > 0) {
		std::cout << "FragTrap "<< _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}

FragTrap::FragTrap(const FragTrap &other)
:ClapTrap(other){}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_HitPoints = other._HitPoints;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
	}
	return (*this);
}
