/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:52 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 16:48:50 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string _name) {
	name = _name;
}

void	HumanB::setWeapon(Weapon _weapon){
	weapon = &_weapon;
}

void	HumanB::attack() {
	std::cout << name << " attacks with their "  << weapon->getType() << std::endl;
}
