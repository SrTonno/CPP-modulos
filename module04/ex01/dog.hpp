/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:20 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/19 13:29:31 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
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
