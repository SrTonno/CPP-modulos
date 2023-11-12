/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/12 18:55:07 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: name_(name){
	try
	{
		if (grade > 150) {
			grade_ = 150;
			throw "Bureaucrat::GradeTooHighException";
		}
		else if (grade < 0) {
			grade_ = 0;
			throw "Bureaucrat::GradeTooLowException.";
		}
		grade_ = grade;
	}
	catch(const char *error) {
		std::cerr << error << std::endl;
	}
}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	(void)other;
	if (this != &other) {
		*this = other;
	}
	return (*this);
}

const std::string	Bureaucrat::getName() const{
	return(name_);
}

int	Bureaucrat::getGrade() const{
	return(grade_);
}

void	Bureaucrat::up_grade()
{
	try
	{
		if ((grade_ + 1) > 150)
			throw "Bureaucrat::GradeTooHighException";
		else if ((grade_ + 1) < 0)
			throw ":GradeTooLowException.";
		grade_++;
	}
	catch(const char *error) {
		std::cerr << error << std::endl;
	}
}

void	Bureaucrat::down_grade()
{
	try
	{
		if ((grade_ - 1) > 150)
			throw "Bureaucrat::GradeTooHighException";
		else if ((grade_ - 1) < 0)
			throw "Bureaucrat::GradeTooLowException.";
		grade_--;
	}
	catch(const char *error) {
		std::cerr << error << std::endl;
	}
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f) {
	out << f.getName() << ", bureaucrat grade " << f.getGrade();
	return (out);
}

void	Bureaucrat::signForm(Form &f)
{
	try {
		if (grade_ < f.getGradeToSign())
			throw "GradeTooHigh";
		else
			throw "Low";
		std::cout << name_ << f.getName() << std::endl;
		f.beSigned(*this);
	}
	catch(const char *error) {
		std::cerr << name_ << "couldn’t sign" << name_ << "because" << error << "." << std::endl;;
	}
}
