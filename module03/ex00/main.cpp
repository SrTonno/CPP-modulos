/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:08:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 15:20:19 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	a("PACO");
	ClapTrap	b("MARIA");

	a.attack("MARIA");
	b.attack("Jonzalo");
	b.takeDamage(0);
	b.beRepaired(2);
	b.takeDamage(20);
	b.beRepaired(2);
	return (0);
}
