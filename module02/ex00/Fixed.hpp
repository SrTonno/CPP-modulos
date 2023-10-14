/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/14 19:19:01 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Fixed
{
	private:
		int	num;
		static const int bits = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};


