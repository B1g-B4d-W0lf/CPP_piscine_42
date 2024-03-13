#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
	public :
// CANON & CONSTRUCTORS
		WrongAnimal();
		~WrongAnimal();
		WrongAnimal(WrongAnimal& bis);
		WrongAnimal& operator=(WrongAnimal& bis);

// FUNCTIONS
		void makeSound() const;
		std::string getType() const;

	protected :
		std::string	type;

};

#endif