/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 15:41:28 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		Cat(const std::string &_type);
		Cat(const Cat &other);
		Cat			&operator=(const Cat &other);
		virtual void	makeSound() const;
};



