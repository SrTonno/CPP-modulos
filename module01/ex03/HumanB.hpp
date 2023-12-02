/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:54 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/02 16:22:06 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
	private:
		Weapon	*weapon;
		std::string	name;
	public:
		HumanB(const std::string &_name);
		void	setWeapon(Weapon &_weapon);
		void	attack();
};
