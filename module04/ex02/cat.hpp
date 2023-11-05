/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/05 13:16:23 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat: public AAnimal
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



