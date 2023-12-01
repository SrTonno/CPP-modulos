/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:06:55 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/01 18:57:37 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>
#include <string>


class Zombie {
	private:
		std::string name;
	public:
		Zombie(std::string _name);
		Zombie();
		void announce();
		void set_name(std::string _name);
};
Zombie*	zombieHorde( int N, std::string name );

#endif
