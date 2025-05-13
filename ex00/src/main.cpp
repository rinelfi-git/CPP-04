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
	const WrongAnimal* wrong_cat = new WrongCat();
	WrongAnimal* another_wrong = wrong_cat->clone();
	std::cout << dog->type() << " " << std::endl;
	std::cout << cat->type() << " " << std::endl;
	std::cout << wrong_cat->type() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	right_animal->makeSound();
	wrong_cat->makeSound();
	another_wrong->makeSound();

	delete right_animal;
	delete cat;
	delete dog;
	delete wrong_cat;
	delete another_wrong;
	return 0;
}
