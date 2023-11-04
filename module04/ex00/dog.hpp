/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:20 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 15:46:04 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		Dog(const std::string &_type);
		Dog(const Dog &other);
		Dog			&operator=(const Dog &other);
		virtual void	makeSound() const;
};



