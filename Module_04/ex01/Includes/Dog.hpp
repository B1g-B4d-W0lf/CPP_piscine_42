#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :
// CANON & CONSTRUCTORS
		Dog();
		~Dog();
		Dog(Dog& bis);
		Dog& operator=(Dog& bis);

// FUNCTIONS
		void makeSound() const;

	private :
		Brain* brain;

};

#endif