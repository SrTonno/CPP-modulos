/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 18:19:13 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/29 12:56:33 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string &name)
: _name(name),
  _HitPoints(10),
  _EnergyPoints(10),
  _AttackDamage(0){
	std::cout << "Constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
: _name(other._name),
  _HitPoints(other._HitPoints),
  _EnergyPoints(other._EnergyPoints),
  _AttackDamage(other._AttackDamage){}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor ClapTrap" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	if (this != &other) {
		_name = other._name;
		_HitPoints = other._HitPoints;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string& target) {
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		std::cout << "ClapTrap "<< _name << " attacks " << target << ", causing " << _AttackDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
}
void	ClapTrap::takeDamage(unsigned int amount){
	if (_HitPoints > 0)
	{
		_HitPoints -= amount;
		std::cout << "ClapTrap "<< _name << " take damage " << amount << ", total hit poins " << _HitPoints << std::endl;
	}
}
void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_HitPoints > 0 && _EnergyPoints > 0)
	{
		_HitPoints += amount;
		std::cout << "ClapTrap "<< _name << " beRepaired " << amount << ", total hit poins " << _HitPoints << std::endl;
		_EnergyPoints--;
	}
}
