/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:25 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/20 16:50:39 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "Bureaucrat.hpp"
/*
incompleto
*/
#include "Form.hpp"

int main(void)
{
	try
	{
		Form f("Formulario 1", 5, 5);
		Bureaucrat b("Antonia", 148);
		b.up_grade();
		//b.up_grade();
		b.signForm(f);
		//f.beSigned(b);



		//b.signForm(f);
		std::cout << "Name: " << b.getName() << "Grade: " << b.getGrade() << std::endl;
		std::cout << b << std::endl;
		Form f1("Formulario 2", 11, 5);
		Bureaucrat a("Manolo", 10);

		a.signForm(f1);
		a.down_grade();
		a.down_grade();
		std::cout << "Name: " << a.getName() << "Grade: " << a.getGrade() << std::endl;
		std::cout << a << std::endl;
	}
		catch(const char *error) {
		std::cerr << error << std::endl;
	}

}
