#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	Animal* dog_copy = dog->clone();
	std::cout << dog->type() << " " << std::endl;
	std::cout << cat->type() << " " << std::endl;
	std::cout << dog_copy->type() << " " << std::endl;
	cat->makeSound();
	dog->makeSound();
	dog_copy->makeSound();

	delete cat;
	delete dog;
	delete dog_copy;
	return 0;
}
