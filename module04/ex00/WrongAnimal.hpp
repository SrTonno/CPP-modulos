


#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		virtual ~WrongAnimal();
		WrongAnimal(const std::string &_type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal			&operator=(const WrongAnimal &other);
		const				std::string	getType()	const;
		void				makeSound() const;
};
