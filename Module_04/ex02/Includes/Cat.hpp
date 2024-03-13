#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

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

	private :
		Brain* brain;
};

#endif