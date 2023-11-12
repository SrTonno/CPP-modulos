/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:56:44 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/12 19:45:00 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
: name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute), isSigned_(false){
	try
	{
		if (gradeToSign > 150 || gradeToExecute > 150) {
			isSigned_ = 150;
			throw "Form::GradeTooHighException";
		}
		else if (gradeToSign < 0 || gradeToExecute < 0) {
			isSigned_ = 0;
			throw "Form::GradeTooLowException.";
		}
	}
	catch(const char *error) {
		std::cerr << error << std::endl;
	}
}

Form::~Form() {}

Form::Form(const Form &other)
: name_(other.name_), gradeToSign_(other.gradeToSign_), gradeToExecute_(other.gradeToExecute_), isSigned_(other.isSigned_)
{
	*this = other;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		*this = other;
	return (*this);
}

std::string Form::getName() const {
	return(name_);
}

int	Form::getGradeToSign() const {
	return(gradeToSign_);
}
int	Form::getGradeToExecute() const {
	return(gradeToExecute_);
}

bool	Form::getIsSigned() const {
	return(isSigned_);
}

std::ostream& operator<<(std::ostream &out, Form const &f)
{
	out << "Name :" << f.getName() << \
			"GradeToSign:" << f.getGradeToSign() << \
			"GradeToExecute:" << f.getGradeToExecute() << \
			"IsSing" << f.getIsSigned();
	return (out);
}
void	Form::beSigned(Bureaucrat &b)
{
	try {
		if (gradeToSign_ < b.getGrade()) {
			throw "Form::GradeTooLowException.";
		}
		if (isSigned_ == true)
			throw "Form: Couldn't sign the form(low exception)";
		isSigned_ = true;
	}
	catch(const char *error) {
		std::cerr << error << std::endl;
	}
}
