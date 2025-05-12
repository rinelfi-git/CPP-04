#pragma once
# ifndef _DOG_HPP_
# define _DOG_HPP_
# include "Animal.hpp"
# include "Brain.hpp"

class Dog: public Animal
{
	private:
		Brain*	_brain;
	public:
		Dog(void);
		Dog(const Dog& ref);
		Dog(const Dog* ref);
		~Dog();
		Animal* clone() const;

		Dog& operator=(const Dog& ref);

		void	makeSound(void) const;
		const Brain*	brain(void) const;
};
#endif
