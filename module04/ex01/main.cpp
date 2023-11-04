/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:22 by tvillare          #+#    #+#             */
/*   Updated: 2023/11/04 19:51:18 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main()
{
	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->set_called("aaaa", 1);
	dog->set_called("eeeee", 10);
	std::cout << "cat" << cat->get_called(1) << std::endl;
	std::cout << "dog" << dog->get_called(10) << std::endl;
	/*main mandatory*/
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	system("leaks -q ex01");
	return 0;
}
