/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:47 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 16:36:53 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon _weapon) {
	name = _name;
	weapon = _weapon;
}

void	HumanA::setWeapon(Weapon _weapon){
	weapon = _weapon;
}

void	HumanA::attack() {
	std::cout << name << " attacks with their "  << weapon.type << std::endl;
}
