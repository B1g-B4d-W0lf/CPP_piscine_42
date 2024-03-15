#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
	public :
		Ice();
		~Ice();
		Ice(Ice& bis);
		Ice& operator=(Ice& bis);

		AMateria* clone() const;
		void use(ICharacter& target);

};

#endif