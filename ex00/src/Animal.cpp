#include "Animal.hpp"
#include <iostream>

Animal::Animal(void)
{}

Animal::Animal(const Animal& ref)
{
	*this = ref;
}

Animal& Animal::operator=(const Animal& ref)
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

Animal::~Animal()
{}

void	Animal::makeSound(void)
{
	std::cout << "Moooo or Coin. I don't know, I'm just an animal." << std::endl;
}

const std::string& Animal::type(void) const
{
	return _type;
}
