/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:51:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 19:05:14 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <cstdlib>
# include <iostream>

class Base
{
	public:
		virtual	~Base();
};

class A: public Base {};
class B: public Base {};
class C: public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

