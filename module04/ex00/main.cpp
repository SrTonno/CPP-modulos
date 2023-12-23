/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:22 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 17:15:53 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "WrongCat.hpp"

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
	std::cout << "\n EXTRA" << std::endl;
	const WrongAnimal* meta2 = new  WrongAnimal();
	const WrongAnimal* i2 = new  WrongCat("Botas Mal");
	std::cout << "Name  WrongCat -> " << i2->getType() << std::endl;
	std::cout << "Name  WrongAnimal -> " << meta2->getType() << std::endl;
	i2->makeSound(); //will output the cat sound!
	meta2->makeSound();
	delete i2;
	delete meta2;
	return 0;
}
