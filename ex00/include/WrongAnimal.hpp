#pragma once
#ifndef _WRONG_ANIMAL_HPP_
# define _WRONG_ANIMAL_HPP_
# include <string>

class WrongAnimal
{
	protected:
		std::string	_type;
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal& ref);
		~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& ref);

		const std::string& type(void) const;

		void	makeSound(void) const;
};
#endif