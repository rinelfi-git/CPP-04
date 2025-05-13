#pragma once
# ifndef _DOG_HPP_
# define _DOG_HPP_
# include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(const Dog& ref);
		~Dog();
		virtual Animal* clone(void) const;

		Dog& operator=(const Dog& ref);

		void	makeSound(void) const;
};
#endif
