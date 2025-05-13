#pragma once
# ifndef _CAT_HPP_
# define _CAT_HPP_
# include "Animal.hpp"

class Cat: public Animal
{
	public:
		Cat(void);
		Cat(const Cat& ref);
		~Cat();
		Animal* clone(void) const;

		Cat& operator=(const Cat& ref);

		void	makeSound(void) const;
};
#endif
