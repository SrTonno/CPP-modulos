/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/04 19:35:42 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>


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
		bool	operator<(const Fixed &other);
		bool	operator>(const Fixed &other);
		bool	operator>>(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator!=(const Fixed &other);
		bool	operator==(const Fixed &other);
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
		Fixed	&max(Fixed & a, Fixed &b);
		Fixed	&min(Fixed & a, Fixed &b);
};
std::ostream& operator<<(std::ostream &out, Fixed const &f);
