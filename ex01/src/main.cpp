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
	const Animal copy = *dog;
	std::cout << dog->type() << " " << std::endl;
	std::cout << cat->type() << " " << std::endl;
	std::cout << &copy << std::endl;
	std::cout << dog << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	right_animal->makeSound();

	delete right_animal;
	delete cat;
	delete dog;
	return 0;
}
