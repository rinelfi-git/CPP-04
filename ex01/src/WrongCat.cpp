#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat(void)
{
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& ref): WrongAnimal(ref)
{
	*this = ref;
}

WrongCat& WrongCat::operator=(const WrongCat& ref)
{
	if (this != &ref)
	{
		_type = ref._type;
	}
	return *this;
}

WrongCat::~WrongCat()
{}

void	WrongCat::makeSound(void) const
{
	std::cout << "Miaou Tabun..." << std::endl;
}
