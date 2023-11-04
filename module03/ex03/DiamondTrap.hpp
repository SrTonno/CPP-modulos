/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 19:02:55 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/17 19:08:13 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
class DiamondTrap: public virtual ScavTrap, FragTrap
{

public:
	DiamondTrap();
	~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}
