#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): Animal()
{
	std::cout << "Dog constructor..." << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& ref): Animal(ref)
{
	std::cout << "Dog copy constructor..." << std::endl;
}

Dog& Dog::operator=(const Dog& ref)
{
	if (this != &ref)
	{
		std::cout << "Dog assignation constructor..." << std::endl;
		_type = ref._type;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor..." << std::endl;
}

Animal*	Dog::clone() const
{
	std::cout << "Dog cloning" << std::endl;
	return new Dog(*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooooo" << std::endl;
}
