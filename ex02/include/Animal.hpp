#pragma once
#ifndef _ANIMAL_HPP_
# define _ANIMAL_HPP_
# include <string>

class Animal
{
	protected:
		std::string	_type;
	public:
		Animal(void);
		Animal(const Animal& ref);
		virtual ~Animal();
		virtual Animal* clone() const = 0;

		Animal& operator=(const Animal& ref);

		const std::string& type(void) const;

		virtual void	makeSound(void) const = 0;
};
#endif