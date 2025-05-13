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
	const Animal* dog_copy = dog->clone();
	const Animal* cat_copy = cat->clone();
	std::cout << dog->type() << " " << std::endl;
	std::cout << cat->type() << " " << std::endl;
	Animal i = Dog();
	std::cout << dog_copy->type() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	right_animal->makeSound();

	const Brain* b = new Brain();
	Dog* dog_b = new Dog();
	Cat* cat_b = new Cat();
	dog_b->brain(NULL);
	cat_b->brain(b);

	delete b;

	dog_b->makeSound();
	cat_b->makeSound();

	Dog* toto = new Dog(*dog_b);
	delete right_animal;
	delete cat;
	delete dog;
	delete dog_copy;
	delete cat_copy;
	delete dog_b;
	delete cat_b;
	delete toto;
	return 0;
}
