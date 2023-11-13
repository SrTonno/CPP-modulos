/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 18:56:59 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/13 12:48:46 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name_;
		const int			gradeToSign_;
		const int			gradeToExecute_;
		bool				isSigned_;

	public:
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		~Form();
		Form(const Form &other);
		Form&		operator=(const Form &other);
		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		bool		getIsSigned() const;
		void		beSigned(Bureaucrat &b);
};

std::ostream& operator<<(std::ostream &out, Form const &f);
