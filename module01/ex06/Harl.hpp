/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:40:48 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/01 13:07:35 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

enum ComplainLevel {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	UNKNOWN
};

class Harl {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	unknown( void );
		ComplainLevel	stringToEnum(const std::string &level);

	public:
		void complain( std::string level );
};
