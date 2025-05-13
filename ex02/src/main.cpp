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

	const unsigned int half = 2;
	const Animal* dogs[half];
	const Animal* cats[half];
	long	i = 0;

	while (i < half)
		dogs[i++] = dog->clone();
	i = 0;
	while (i < half)
		cats[i++] = cat->clone();

	i = 0;
	while (i < half)
		cats[i++]->makeSound();
	i = 0;
	while (i < half)
		dogs[i++]->makeSound();

	delete cat;
	delete dog;
	delete dog_copy;
	i = 0;
	while (i < half)
		delete cats[i++];
	i = 0;
	while (i < half)
		delete dogs[i++];
	return 0;
}
