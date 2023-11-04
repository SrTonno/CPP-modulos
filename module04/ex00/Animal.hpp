/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:44:32 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 16:00:23 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
	protected:
		std::string type;
	public:
		Animal(const std::string &_type);
		Animal();
		virtual ~Animal();
		Animal(const Animal &other);
		Animal			&operator=(const Animal &other);
		const			std::string	getType()	const;
		virtual void	makeSound() const;
};


