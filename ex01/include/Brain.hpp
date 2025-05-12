#pragma once
#ifndef _BRAIN_HPP_
# define _BRAIN_HPP_
# define IDEA_LENGTH 100
# include <string>

class Brain
{
	private:
		std::string	_ideas[IDEA_LENGTH];
	public:
		Brain(void);
		Brain(const Brain& ref);
		~Brain();

		Brain& operator=(const Brain& ref);

		const std::string*	ideas(void) const;
		void				ideas(const std::string* ideas);
};
#endif