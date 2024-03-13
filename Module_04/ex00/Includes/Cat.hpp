#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public :
// CANON & CONSTRUCTORS
		Cat();
		~Cat();
		Cat(Cat& bis);
		Cat& operator=(Cat& bis);

// FUNCTIONS
		void makeSound() const;

};

#endif