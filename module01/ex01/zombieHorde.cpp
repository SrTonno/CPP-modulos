/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:49:48 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/28 15:46:12 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*z = new Zombie[N];
	int		i;

	i = 1;
	while (N >= i) {
		z[i].set_name(name);
		z[i++].announce();
	}
	return (z);
}
