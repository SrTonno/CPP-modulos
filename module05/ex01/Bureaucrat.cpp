/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:12 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/20 16:21:51 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade)
: name_(name){
	if (grade > 150)
		throw "Bureaucrat::GradeTooHighException";
	else if (grade < 0)
		throw "Bureaucrat::GradeTooLowException.";
	grade_ = grade;
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

	if ((grade_ + 1) > 150)
		throw "Bureaucrat::GradeTooHighException";
	else if ((grade_ + 1) < 0)
		throw ":GradeTooLowException.";
	grade_++;
}

void	Bureaucrat::down_grade()
{
	if ((grade_ - 1) > 150)
		throw "Bureaucrat::GradeTooHighException";
	else if ((grade_ - 1) < 0)
		throw "Bureaucrat::GradeTooLowException.";
	grade_--;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f) {
	out << f.getName() << ", bureaucrat grade " << f.getGrade();
	return (out);
}

void	Bureaucrat::signForm(Form &f)
{

	if (grade_ < f.getGradeToSign())
		throw "GradeTooHigh";
	std::cout << name_ << " " << f.getName() << std::endl;
	f.beSigned(*this);
}
