#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
	public :
// CANON & CONSTRUCTORS
		Cure();
		~Cure();
		Cure(Cure& bis);
		Cure& operator=(Cure& bis);

// FUNCTIONS
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif