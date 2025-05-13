#include "Cat.hpp"
#include <iostream>

Cat::Cat(void): Animal()
{
	std::cout << "Cat constructor..." << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat& ref): Animal(ref)
{
	std::cout << "Cat copy constructor..." << std::endl;
}

Cat& Cat::operator=(const Cat& ref)
{
	if (this != &ref)
	{
		std::cout << "Cat assignation constructor..." << std::endl;
		_type = ref._type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor..." << std::endl;
}

Animal*	Cat::clone() const
{
	std::cout << "Cat cloning" << std::endl;
	return new Cat(*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}
