/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:09:49 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 18:04:14 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Weapon.hpp"

class  HumanA {
	private:
		Weapon		&weapon;
		std::string	name;
	public:
		HumanA(const std::string &_name, Weapon &_weapon);
		void	attack();
};

