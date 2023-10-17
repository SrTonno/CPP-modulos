/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:43 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/17 18:28:26 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


FragTrap::FragTrap(const std::string &name)
: ClapTrap(name) {
	//_name = name;
	_HitPoints = 100;
	_EnergyPoints = 50;
	_AttackDamage = 20;
	std::cout << "Constructor FragTrap" << std::endl;
}


FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		std::cout << "FragTrap "<< _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}
void	FragTrap::highFivesGuys( void )
{
	if (_HitPoints > 0)
	{
		std::cout << "FragTrap "<< _name << " highFivesGuys" << std::endl;
	}
}
