/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:20 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/05 13:16:37 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog: public AAnimal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		Dog(const std::string &_type);
		Dog(const Dog &other);
		Dog			&operator=(const Dog &other);
		virtual void	makeSound() const;
		void			set_called(const std::string &idea, int id);
		std::string		get_called(int id);
};



