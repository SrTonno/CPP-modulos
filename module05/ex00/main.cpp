/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/19 17:29:37 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat a("Manolo", 1);
		a.down_grade();
		//a.down_grade();
		std::cout << "Name: " << a.getName() << "Grade: " << a.getGrade() << std::endl;
		std::cout << a << std::endl;
		Bureaucrat b("Antonia", 149);
		b.up_grade();
		std::cout << "Name: " << b.getName() << "Grade: " << b.getGrade() << std::endl;
		std::cout << b << std::endl;
		b.up_grade();
	}
		catch(const char *error) {
		std::cerr << error << std::endl;
	}
}
