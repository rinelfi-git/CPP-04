#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void): _type("wild WrongAnimal")
{}

WrongAnimal::WrongAnimal(const WrongAnimal& ref)
{
	*this = ref;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Hello there... I'a monster." << std::endl;
}

const std::string& WrongAnimal::type(void) const
{
	return _type;
}
