/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:54:06 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/13 18:15:05 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*z[N];
	int		i;

	i = 1;
	while (N > i) {
		z[i] = new Zombie(name);
		z[i]->announce();
		i++;
	}
	return (z[0]);
}
