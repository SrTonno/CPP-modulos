/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:21:47 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/18 11:57:38 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:
		FragTrap(const std::string &name);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(const std::string& target)
};


