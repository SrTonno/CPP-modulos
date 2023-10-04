/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:19:14 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 13:01:40 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	//Zombie z("HOAL");
	Zombie *horde;
	horde = zombieHorde(7, "PAC");
	delete[] (horde);
	//system("leaks -q ex01");
	return 0;
}
