#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain 
{
	public :
		Brain();
		~Brain();
		Brain(Brain& bis);
		Brain& operator=(Brain& bis);

		void addThoughts(std::string thought);
		void sayThought(int j);

		std::string	ideas[100];
		int			i;
};

#endif