/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 16:06:55 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/12 16:33:01 by tvillare         ###   ########.fr       */
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
		void announce();
};
void	randomChump( std::string name );
Zombie*	newZombie(std::string name);


#endif
