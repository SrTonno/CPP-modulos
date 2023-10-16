/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:54:42 by tvillare          #+#    #+#             */
/*   Updated: 2023/10/16 16:21:38 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


/*********** CONTRUCTORS & DESTRUCTORS ***********/
Fixed::Fixed(void)
: num(0) {
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) {
	this->num = value << Fixed::bits;
}

Fixed::Fixed(const float value) {
	this->num = roundf(value *(1 << Fixed::bits));
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
: num(other.num) {
	//std::cout << "Copy constructor called" << std::endl;
}

/*********** ----------------- ***********/
Fixed &Fixed::operator=(const Fixed &other)
{
	//std::cout << "Assignation operator called" << std::endl;
	if (this != &other) {
		num = other.num;
	}
	return (*this);
}
/*********** ARITHMETIC OPERATORS ***********/
Fixed Fixed::operator*(const Fixed &other) {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator+(const Fixed &other) {
	Fixed res(this->toFloat() + other.toFloat());
	return res;}

Fixed Fixed::operator-(const Fixed &other) {
	Fixed res(this->toFloat() - other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed &other) {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

/*********** COMPARADORES ***********/
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
/*********** INCREMENTADORES & DECREMENTADORES ***********/
Fixed &Fixed::operator++() {
	++(this->num);
	return (*this);
}

Fixed &Fixed::operator--() {
	--(this->num);
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed prev(*this);

	++(this->num);
	return prev;
}
Fixed Fixed::operator--(int)
{
	Fixed prev(*this);

	--(this->num);
	return prev;
}

/*********** FUNCIONES ***********/

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

Fixed &Fixed::max(Fixed & a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed &Fixed::min(Fixed & a, Fixed & b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}
