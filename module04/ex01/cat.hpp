/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 19:48:57 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		Cat(const std::string &_type);
		Cat(const Cat &other);
		Cat			&operator=(const Cat &other);
		virtual void	makeSound() const;
		void			set_called(const std::string &idea, int id);
		std::string		get_called(int id);
};



