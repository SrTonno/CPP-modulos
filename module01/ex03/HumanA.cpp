/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:47 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 17:58:37 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string &_name, Weapon &_weapon)
: weapon(_weapon) {
	name = _name;
}


void	HumanA::attack() {
	std::cout << name << " attacks with their "  << weapon.getType() << std::endl;
}
