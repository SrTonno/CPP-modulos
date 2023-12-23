/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 15:25:25 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		WrongCat(const std::string &_type);
		WrongCat(const WrongCat &other);
		WrongCat			&operator=(const WrongCat &other);
		void	makeSound() const;
};



