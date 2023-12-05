/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:54:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/05 17:25:57 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
: num(0) {
	std::cout << "Default constructor called" << std::endl;
}


Fixed::Fixed(const int _num)
{
	std::cout << "Int constructor called" << std::endl;
	num = (_num << bits);
}

Fixed::Fixed(const float _num)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf((float)_num * (1 << bits));
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		num = other.num;
	}
	return (*this);
}

int Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void Fixed::setRawBits ( int const raw ){
	//std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}
float Fixed:: toFloat(void) const {
	return ((float)num / (1 << bits));
}

int Fixed::toInt(void) const {
	return (num >> bits);
}

std::ostream& operator<<(std::ostream &out, Fixed const &f)
{
	out << f.toFloat();
	return (out);
}
