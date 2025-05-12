#pragma once
# ifndef _CAT_HPP_
# define _CAT_HPP_
# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
	private:
		Brain*	_brain;
	public:
		Cat(void);
		Cat(const Cat& ref);
		Cat(const Cat* ref);
		~Cat();
		Animal* clone() const;

		Cat& operator=(const Cat& ref);

		void	makeSound(void) const;
};
#endif
