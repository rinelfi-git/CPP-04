#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): _brain(new Brain())
{
	std::cout << "Cat constructor" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& ref): Animal(ref),  _brain(new Brain(*ref._brain))
{
	std::cout << "Cat copy constructor" << std::endl;
	_type = ref._type;
}

Animal*	Cat::clone() const
{
	std::cout << "Cat cloning" << std::endl;
	return new Cat(*this);
}

Cat& Cat::operator=(const Cat& ref)
{
	if (this != &ref)
	{
		std::cout << "Cat assignment constructor" << std::endl;
		_type = ref._type;
		if (_brain)
			delete _brain;
		_brain = new Brain(*ref._brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor" << std::endl;
	if (_brain)
		delete _brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

const Brain*	Cat::brain(void) const
{
	return _brain;
}
