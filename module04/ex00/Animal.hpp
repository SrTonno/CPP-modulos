/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:44:32 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/17 16:31:28 by tvillare         ###   ########.fr       */
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
		Animal();
		virtual ~Animal();
		Animal(const std::string &_type);
		Animal(const Animal &other);
		Animal			&operator=(const Animal &other);
		const			std::string	getType()	const;
		virtual void	makeSound() const;
};


