/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:54:32 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/14 19:11:38 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base(){}
Base	*generate(void)
{
	int rand;
	Base *ptr = NULL;

	std::srand(std::time(0));
	rand = std::rand() % 3;
	if (rand == 0)
		ptr =new A();
	else if (rand == 1)
		ptr = new B();
	else if (rand == 2)
		ptr = new C();
	return (ptr);
}
void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}
void	identify(Base &p)
{
	if (dynamic_cast<A*>(&p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(&p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(&p) != NULL)
		std::cout << "C" << std::endl;
}
