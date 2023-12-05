/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/05 16:49:35 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>


class Fixed
{
	private:
		int					num;
		static const int	bits;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &other);
		Fixed &operator=(const Fixed &other);
		int getRawBits( void ) const;
		void setRawBits ( int const raw );
};


