/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/13 15:43:13 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Bureaucrat.hpp"
/*
incompleto
*/
#include "Form.hpp"

int main(void)
{
	Bureaucrat a("Manolo", 1);
	Form f("Formulario 1", 5, 5);
	a.signForm(f);
	a.down_grade();
	a.down_grade();
	std::cout << "Name: " << a.getName() << "Grade: " << a.getGrade() << std::endl;
	std::cout << a << std::endl;
	Bureaucrat b("Antonia", 159);
	b.up_grade();
	b.up_grade();
	b.signForm(f);
	f.beSigned(b);
	b.signForm(f);
	std::cout << "Name: " << b.getName() << "Grade: " << b.getGrade() << std::endl;
	std::cout << b << std::endl;

}
