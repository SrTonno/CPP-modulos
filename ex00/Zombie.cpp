/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:31:56 by tvillare          #+#    #+#             */
/*   Updated: 2023/07/09 19:00:49 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Zombie {
	private:
		std::string name;

	public:
		Zombie(std::string _name);
		void announce();
};

Zombie::Zombie(std::string _name) {
	name = _name;
}

void Zombie::announce() {
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

int main() {
	Zombie z1("PACO");
	z1.announce();
	return 0;
}
