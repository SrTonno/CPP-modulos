/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:31 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/05 17:58:03 by tvillare         ###   ########.fr       */
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
		~Fixed(void);
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &other);
		Fixed	&operator=(const Fixed &other);
		/*__ARITHMETIC_OPERATORS__*/
		Fixed	operator*(const Fixed &other);
		Fixed	operator+(const Fixed &other);
		Fixed	operator-(const Fixed &other);
		Fixed	operator/(const Fixed &other);
		/*__COMPARISON_OPERATORS_*/
		bool	operator<(const Fixed &other);
		bool	operator>(const Fixed &other);
		bool	operator>=(const Fixed &other);
		bool	operator<=(const Fixed &other);
		bool	operator!=(const Fixed &other);
		bool	operator==(const Fixed &other);
		/*__INCREMENT/DECREMENT_OPERATORS__*/
		Fixed	&operator++(); /* Pre  - increment */
		Fixed	&operator--(); /* Pre  - decrement */
		Fixed	operator++(int); /* Post - increment */
		Fixed	operator--(int); /* Post - decrement */
		/*__GET/TO__*/
		int		toInt(void) const;
		float	toFloat(void) const;
		int		getRawBits( void ) const;
		void	setRawBits ( int const raw );
		/*__MIN/MAX__*/
		static const Fixed& max(Fixed const& a, Fixed const& b);
		static const Fixed& min(Fixed const& a, Fixed const& b);
		Fixed	&max(Fixed & a, Fixed &b);
		Fixed	&min(Fixed & a, Fixed &b);
};
std::ostream& operator<<(std::ostream &out, Fixed const &f);
