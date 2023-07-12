/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:14:19 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/12 16:44:14 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie z("HOAL");
	Zombie z1("PACO");
	Zombie z2("Celia");
	Zombie	*z3;
	z2.announce();
	randomChump("Paula");
	z3 = newZombie("Paula2");
	z3->announce();
	delete z3;
	return 0;
}
