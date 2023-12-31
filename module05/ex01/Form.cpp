/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:56:44 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/20 16:49:33 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute)
: name_(name), gradeToSign_(gradeToSign), gradeToExecute_(gradeToExecute), isSigned_(false) {
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw "Form::GradeTooHighException";
	else if (gradeToSign < 0 || gradeToExecute < 0)
		throw "Form::GradeTooLowException.";
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
	if (gradeToSign_ > b.getGrade())
			throw "Form::GradeTooLowException.";
	if (isSigned_ == true)
		throw "Form: Form already signed";
	isSigned_ = true;

}
