/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:20 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/12 19:35:30 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include "Form.hpp"
class Form;

class Bureaucrat
{
	private:
		const std::string	name_;
		int					grade_;
	public:
		Bureaucrat(const std::string &name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat			&operator=(const Bureaucrat &other);
		Bureaucrat			&operator<<(const Bureaucrat &other);
		const std::string	getName() const;
		int					getGrade() const;
		void				up_grade();
		void				down_grade();
		void				signForm(Form &f);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f);

