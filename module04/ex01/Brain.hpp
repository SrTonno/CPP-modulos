/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 16:07:09 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 19:38:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Brain
{
	protected:
		std::string called[100];
	public:
		Brain(/* args */);
		~Brain();
		Brain(const Brain &other);
		Brain			&operator=(const Brain &other);
		void			set_called(std::string idea, int id);
		std::string		get_called(int id);
};

