/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/15 19:54:33 by tvillare         ###   ########.fr       */
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
		Fixed();
		Fixed(const int num);
		Fixed(const float num);
		~Fixed(void);
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);
		Fixed	operator*(const Fixed &other);
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		Fixed	operator<(const Fixed &other);
		Fixed	operator>(const Fixed &other);
		Fixed	operator>>(const Fixed &other);
		Fixed	operator>=(const Fixed &other);
		Fixed	operator<=(const Fixed &other);
		Fixed	operator!=(const Fixed &other);
		Fixed	operator==(const Fixed &other);
		Fixed	&operator++();
		Fixed	operator++(int);
		Fixed	&operator--();
		Fixed	operator--(int);
		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		static const Fixed& max(Fixed const& a, Fixed const& b);
		static const Fixed& min(Fixed const& a, Fixed const& b);
};
std::ostream& operator<<(std::ostream &out, Fixed const &f);
