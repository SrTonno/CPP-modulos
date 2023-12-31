/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:47 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/06 12:22:44 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(const std::string &name);
		FragTrap();
		~FragTrap();
		FragTrap(const FragTrap &other);
		FragTrap	&operator=(const FragTrap &other);
		void		highFivesGuys(void);
		void		attack(const std::string& target);
};


