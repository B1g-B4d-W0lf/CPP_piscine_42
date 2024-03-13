#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
// CANON & CONSTRUCTORS
		WrongCat();
		~WrongCat();
		WrongCat(WrongCat& bis);
		WrongCat& operator=(WrongCat& bis);

// FUNCTIONS

};

#endif