/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:22:29 by tvillare          #+#    #+#             */
/*   Updated: 2023/12/23 18:25:09 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"

void extra()
{
	std::cout << "EXTRA" << std::endl;
	std::cout << "Creating all the different types of materias for the game" << std::endl;
	IMateriaSource* game = new MateriaSource();
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());
	game->learnMateria(new Ice());
	game->learnMateria(new Cure());

	std::cout << "Creating player: [Tono]" << std::endl;
	ICharacter* player = new Character("Tono");
	AMateria* materia;

	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("invalid");
	player->equip(materia);
	materia = game->createMateria("");
	player->equip(materia);
	materia = game->createMateria("ice");
	player->equip(materia);
	materia = game->createMateria("ice");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);
	materia = game->createMateria("cure");
	player->equip(materia);


	std::cout << "Creating enemy: [bob]" << std::endl;
	ICharacter* bob = new Character("bob");

	std::cout << "Tono will use 2 spells on Bob" << std::endl;
	player->unequip(1);
	player->use(1, *bob);
	player->use(1, *bob);
	player->use(0, *bob);
	player->use(0, *bob);

	delete bob;
	delete player;
	delete game;
}

int	main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	extra();
	system("leaks -q ex03");
	return 0;
}
