#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

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

};

#endif