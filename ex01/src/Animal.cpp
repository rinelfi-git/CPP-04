#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("wild animal")
{
	std::cout << "Animal constructor" << std::endl;
}

Animal::Animal(const Animal& ref)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = ref;
}

Animal& Animal::operator=(const Animal& ref)
{
	if (this != &ref)
	{
		std::cout << "Animal assignment constructor" << std::endl;
		_type = ref._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Moooo or Coin. I don't know, I'm just an animal." << std::endl;
}

const std::string& Animal::type(void) const
{
	return _type;
}
