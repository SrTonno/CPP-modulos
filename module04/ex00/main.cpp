/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:22 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/17 19:33:09 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog("Salchicha");
	const Animal* i = new Cat("Botas");
	std::cout << "Name DOG -> " << j->getType() << std::endl;
	std::cout << "Name Cat -> " << i->getType() << std::endl;
	std::cout << "Name Animal -> " << meta->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete i;
	delete j;
	delete meta;
	//Extra
	std::cout << "\n\n EXTRA" << std::endl;
	Cat cat = Cat("aaaaa");
	Dog dog = Dog("bbbbbb");
	Cat clone = Cat(cat);
	std::cout << "Name DOG -> " << dog.getType() << std::endl;
	std::cout << "Name Cat -> " << cat.getType() << std::endl;
	std::cout << "Name cat clone -> " << clone.getType() << std::endl;
	dog.makeSound();
	cat.makeSound();
	clone.makeSound();
	return 0;
}
