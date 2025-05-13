#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void): WrongAnimal()
{
	std::cout << "WrongCat constructor..." << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref): WrongAnimal(ref)
{
	std::cout << "WrongCat copy constructor..." << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	if (this != &ref)
	{
		std::cout << "WrongCat assignation constructor..." << std::endl;
		_type = ref._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor..." << std::endl;
}

WrongAnimal*	WrongCat::clone() const
{
	std::cout << "WrongCat cloning" << std::endl;
	return new WrongCat(*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miow maybe..." << std::endl;
}
