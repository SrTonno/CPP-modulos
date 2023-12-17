/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:22 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/17 19:35:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main()
{
	std::cout << "__CREATE_DOGS__" << std::endl;
	Dog	d_heap;
	Dog	*d_stack = new Dog();

	std::cout << "__CREATE_CATS__" << std::endl;
	Cat	c_heap;
	Cat	*c_stack = new Cat();

	std::cout << std::endl;
	d_stack->makeSound();
	d_heap.makeSound();
	c_stack->makeSound();
	c_heap.makeSound();
	std::cout << "\n__DELETE_STACK__" << std::endl;
	delete d_stack;
	delete c_stack;
	std::cout << "\n__DELETE_HEAP__" << std::endl;
	return 0;
}
