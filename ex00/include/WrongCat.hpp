#pragma once
# ifndef _WRONG_WrongCAT_HPP_
# define _WRONG_WrongCAT_HPP_
# include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat(void);
		WrongCat(const WrongCat& ref);
		~WrongCat();
		virtual WrongAnimal* clone(void) const;

		WrongCat& operator=(const WrongCat& ref);

		void	makeSound(void) const;
};
#endif
