/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/05 17:25:02 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					num;
		static const int	bits = 8;
	public:
		Fixed();
		~Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits( void ) const;
		void	setRawBits(int const raw );
		Fixed	&operator=(const Fixed &other);
};

std::ostream& operator<<(std::ostream &out, Fixed const &f);
