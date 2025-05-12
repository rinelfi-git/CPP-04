#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

int	main(void)
{
	const Animal* right_animal = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	Animal* dog_copy = dog->clone();
	Animal* cat_copy = cat->clone();
	std::cout << dog->type() << " " << std::endl;
	std::cout << cat->type() << " " << std::endl;
	std::cout << dog_copy->type() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	right_animal->makeSound();

	delete right_animal;
	delete cat;
	delete dog;
	delete dog_copy;
	delete cat_copy;
	return 0;
}
