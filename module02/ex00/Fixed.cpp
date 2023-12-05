/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:54:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/05 16:55:44 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::bits = 8;

Fixed::Fixed(void)
: num(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	num = other.getRawBits();
}


Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called " << std::endl;
	if (this != &other) {
		num = other.getRawBits();
	}
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void Fixed::setRawBits ( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}
