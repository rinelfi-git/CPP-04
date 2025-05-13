#include "Dog.hpp"
#include <iostream>

Dog::Dog(void): _brain(new Brain())
{
	std::cout << "Dog constructor" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog& ref): Animal(ref), _brain(new Brain(*ref._brain))
{
	std::cout << "Dog copy constructor" << std::endl;
	_type = ref._type;
}

Animal*	Dog::clone() const
{
	std::cout << "Dog cloning" << std::endl;
	return new Dog(*this);
}

Dog& Dog::operator=(const Dog& ref)
{
	if (this != &ref)
	{
		std::cout << "Dog assignment constructor" << std::endl;
		_type = ref._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*ref._brain);
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor" << std::endl;
	if (_brain)
		delete _brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wooooooo" << std::endl;
}

const Brain*	Dog::brain(void) const
{
	return _brain;
}
