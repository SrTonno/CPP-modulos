/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:21:50 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/04 16:44:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string	Weapon::getType() {
	return (type);
}

void	Weapon::setType(std::string _type) {
	type = _type;
}
Weapon::Weapon(std::string _type) {
	type = _type;
}
