#include "Dog.hpp"
#include <iostream>

Dog::Dog(void)
{
	_type = "Dog";
}

Dog::Dog(const Dog& ref): Animal(ref)
{
	*this = ref;
}

Dog& Dog::operator=(const Dog& ref)
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

Dog::~Dog()
{}

void	Dog::makeSound(void) const
{
	std::cout << "Ouaf koahy !!" << std::endl;
}
