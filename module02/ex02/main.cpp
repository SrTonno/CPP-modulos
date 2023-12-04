/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 17:53:04 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/04 19:41:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed resu;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << "--------------------------------------ESTRA-------------------------" << std::endl;
	resu = a + a;
	std::cout << "a + a=resu (a)" << a << " = "<< resu << std::endl;
	resu = a * 10000;
	std::cout << "a * 10000=resu (a)" << a << " = "<< resu << std::endl;
	resu = a / 2;
	std::cout << "a / 2=resu (a)" << a << " = "<< resu << std::endl;
	resu = a - a;
	std::cout << "a - a=resu (a)" << a << " = "<< resu << std::endl;
	if (a > -4)
		std::cout << "Mañor" << std::endl;
	if (a == a)
		std::cout << "Igual" << std::endl;
	return 0;
}
