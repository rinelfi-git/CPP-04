#include "Animal.hpp"
#include <iostream>

Animal::Animal(void): _type("wild animal")
{
	std::cout << "Animal constructor..." << std::endl;
}

Animal::Animal(const Animal& ref): _type(ref._type)
{
	std::cout << "Animal copy constructor..." << std::endl;
}

Animal& Animal::operator=(const Animal& ref)
{
	if (this != &ref)
	{
		std::cout << "Animal assignation constructor..." << std::endl;
		_type = ref._type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor..." << std::endl;
}

Animal*	Animal::clone() const
{
	std::cout << "Animal cloning" << std::endl;
	return new Animal(*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "I'm just a basic animal." << std::endl;
}

const std::string& Animal::type(void) const
{
	return _type;
}
