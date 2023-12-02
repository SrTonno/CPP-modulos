/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 11:49:48 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/02 14:34:12 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*z;
	int		i;

	if (N < 0)
		return (NULL);
	z = new Zombie[N];
	i = 0;
	while (N > i) {
		z[i].set_name(name);
		z[i++].announce();
	}
	return (z);
}
