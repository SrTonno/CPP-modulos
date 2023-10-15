/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:54:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/15 20:04:35 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"



Fixed::Fixed(void)
: num(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int _num)
: num(_num) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const float _num)
: num(_num) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
: num(other.num) {
	//std::cout << "Copy constructor called" << std::endl;
}


Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		num = other.num;
	}
	return (*this);
}

Fixed Fixed::operator*(const Fixed &other) {
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator+(const Fixed &other) {
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) {
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other) {
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator>(const Fixed &other) {
	return (this->getRawBits() > other.getRawBits());
}

Fixed Fixed::operator<(const Fixed &other) {
	return (this->getRawBits() < other.getRawBits());
}

Fixed Fixed::operator<=(const Fixed &other) {
	return (this->getRawBits() <= other.getRawBits());
}

Fixed Fixed::operator>=(const Fixed &other) {
	return (this->getRawBits() <= other.getRawBits());
}

Fixed Fixed::operator>>(const Fixed &other) {
	return (this->getRawBits() <= other.getRawBits());
}

Fixed Fixed::operator!=(const Fixed &other) {
	return (this->getRawBits() != other.getRawBits());
}

Fixed Fixed::operator==(const Fixed &other) {
	return (this->getRawBits() == other.getRawBits());
}

Fixed &Fixed::operator++() {
	num += 1;
	return (*this);
}

Fixed &Fixed::operator--() {
	num -= 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed result = (*this);
	--(*this);
	return (result);
}

int Fixed::getRawBits( void ) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (num);
}

void Fixed::setRawBits ( int const raw ){
	//std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}

float Fixed::toFloat(void) const {
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

const Fixed &Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

const Fixed &Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

