/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:21:50 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/02 16:19:21 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string &_type) {
	type = _type;
}

const std::string	&Weapon::getType() {
	return (type);
}

void	Weapon::setType(const std::string &_type) {
	type = _type;
}
