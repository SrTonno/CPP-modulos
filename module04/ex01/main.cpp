/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 19:36:22 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/22 18:45:02 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"
#include "cat.hpp"

void gato_piensa(Cat *cat, const std::string &text)
{
	for (int i = 0; i < 100 ; i++)
	{
		cat->set_called(text, i);
	}
}

void gato_que_piensa(Cat *cat)
{
	for (int i = 0; i < 100 ; i++)
	{
		std::cout << "CAT: piesa "<< i <<  " : " << cat->get_called(i) << std::endl;
	}
}


int main()
{
	Cat *cat = new Cat();
	Dog *dog = new Dog();

	cat->set_called("aaaa", 1);
	dog->set_called("eeeee", 10);
	std::cout << "cat" << cat->get_called(1) << std::endl;
	std::cout << "dog" << dog->get_called(10) << std::endl;
	gato_piensa(cat, "caaaaaat");
	cat->set_called("tercer pensamiento", 2);
	cat->set_called("ultimo pensamiento", 99);
	gato_que_piensa(cat);
	delete cat;
	delete dog;
	//pruebas EXTRA
	std::cout << "--------->>>EXTRA" << std::endl;
	Cat as;
	{
		gato_piensa(&as, "Hola");
		Cat tmp = as;
		gato_que_piensa(&tmp);

	}
	return 0;
}
