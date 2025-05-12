#include "Brain.hpp"
#include <iostream>

Brain::Brain(void)
{
	int	i;

	std::cout << "Brain constructor" << std::endl;
	i = -1;
	while (++i < IDEA_LENGTH)
		_ideas[i] = "";
}

Brain::Brain(const Brain& ref)
{
	std::cout << "Brain copy constructor" << std::endl;
	*this = ref;
}

Brain& Brain::operator=(const Brain& ref)
{
	if (this != &ref)
	{
		std::cout << "Brain assignment constructor" << std::endl;
		ideas(ref._ideas);
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

const std::string*	Brain::ideas(void) const
{
	return _ideas;
}
void				Brain::ideas(const std::string* ideas)
{
	int	i;

	i = -1;
	while (++i < IDEA_LENGTH)
		_ideas[i] = ideas[i];
}
