/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:02:27 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/05 14:02:28 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#pragma once

#include <iostream>
#include <string>

class AAnimal
{
	protected:
		std::string type;
	public:
		AAnimal(const std::string &_type);
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal			&operator=(const AAnimal &other);
		const			std::string	getType()	const;
		virtual void	makeSound() const;

};


