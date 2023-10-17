/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:08:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/17 18:24:04 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap	a("PACO");
	ScavTrap	b("MARIA");
	FragTrap	c("MARIANO");

	a.attack("MARIA");
	b.takeDamage(0);
	b.attack("PACO");
	a.takeDamage(20);
	b.guardGate();
	c.highFivesGuys();
	return (0);
}
