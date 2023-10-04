/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:49 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 16:36:21 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"
class HumanA {
	private:
		Weapon		weapon;
		std::string	name;
	public:
		HumanA(std::string _name, Weapon _weapon);
		void	setWeapon(Weapon _weapon);
		void	attack();
};

void	setWeapon(Weapon _weapon);
void	attack();
