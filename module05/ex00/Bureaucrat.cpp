/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/08 19:51:31 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: name_(name), grade_(grade){
	try
	{
		if (grade > 150)
			throw "a Bureaucrat::GradeTooHighException";
		else if (grade < 0)
			throw ":GradeTooLowException.";
	}
	catch(const char *error)
	{
		std::cerr << error << '\n';
	}
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	(void)other;
	/*if (this != &other) {
		_name = other._name;
		_HitPoints = other._HitPoints;
		_AttackDamage = other._AttackDamage;
		_EnergyPoints = other._EnergyPoints;
	}*/
	return (*this);
}
