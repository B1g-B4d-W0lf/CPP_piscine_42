#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
// CANON & CONSTRUCTORS
		Ice();
		~Ice();
		Ice(Ice& bis);
		Ice& operator=(Ice& bis);

// FUNCTIONS
		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif