/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:52 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/02 16:12:49 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &_name) {
	name = _name;
}

void	HumanB::setWeapon(Weapon &_weapon){
	weapon = &_weapon;
}

void	HumanB::attack() {
	std::cout << name << " attacks with their "  << weapon->getType() << std::endl;
}
