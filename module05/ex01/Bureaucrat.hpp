/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:05:20 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/09 17:39:04 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

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
		int					getGrade();
		void				up_grade();
		void				down_grade();
};

std::ostream& operator<<(std::ostream &out, Bureaucrat const &f);
