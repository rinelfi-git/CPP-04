#include "Cat.hpp"
#include <iostream>

Cat::Cat(void)
{
	_type = "Cat";
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
}

Cat& Cat::operator=(const Cat& ref)
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

Cat::~Cat()
{}

void	Cat::makeSound(void)
{
	std::cout << "Nyan desu yo!!" << std::endl;
}
