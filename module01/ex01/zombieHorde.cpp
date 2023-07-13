/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 19:54:06 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/13 15:50:39 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
Zombie*	zombieHorde( int N, std::string name )
{
	Zombie	*z;
	Zombie	*aux;
	int		i;

	if (N <= 0)
		return (NULL);
	aux = new Zombie(name);
	aux->announce();
	i = 1;
	while (N > i) {
		z = new Zombie(name);
		z->announce();
		i++;
	}
	return (aux);
}
