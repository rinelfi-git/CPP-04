#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(void): _type("wild WrongAnimal")
{
	std::cout << "WrongAnimal constructor..." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& ref): _type(ref._type)
{
	std::cout << "WrongAnimal copy constructor..." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& ref)
{
	if (this != &ref)
	{
		std::cout << "WrongAnimal assignation constructor..." << std::endl;
		_type = ref._type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor..." << std::endl;
}

WrongAnimal*	WrongAnimal::clone() const
{
	std::cout << "WrongAnimal cloning" << std::endl;
	return new WrongAnimal(*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Hello there... I'a monster." << std::endl;
}

const std::string& WrongAnimal::type(void) const
{
	return _type;
}
