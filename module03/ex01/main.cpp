/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:08:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 15:50:20 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	a("PACO");
	ScavTrap	b("MARIA");

	a.attack("MARIA");
	b.takeDamage(0);
	b.attack("PACO");
	a.takeDamage(20);
	b.guardGate();
	
	return (0);
}
