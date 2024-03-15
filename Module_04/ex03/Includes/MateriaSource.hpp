#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		~MateriaSource();
		MateriaSource(MateriaSource& bis);
		MateriaSource& operator=(MateriaSource& bis);

		void learnMateria(AMateria* m);
		AMateria* createMateria(std::string const & type);
		AMateria* getStock(int index);

	private :
		AMateria *stock[4];
		int		in;
		
};

#endif