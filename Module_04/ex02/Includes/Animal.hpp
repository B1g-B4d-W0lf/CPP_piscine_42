#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public :
// CANON & CONSTRUCTORS
		Animal();
		virtual ~Animal();
		Animal(Animal& bis);
		Animal& operator=(Animal& bis);

// FUNCTIONS
		virtual void makeSound() const = 0;
		std::string getType() const;

	protected :
		std::string	type;

};

#endif