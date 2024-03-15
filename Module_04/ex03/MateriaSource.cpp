#include "Includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
	in = 0;
	for (int i = 0; i < 4; i++)
		stock[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (stock[i])
			delete stock[i];
	}
}

MateriaSource::MateriaSource(MateriaSource& bis)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
	*this = bis;
}

MateriaSource& MateriaSource::operator=(MateriaSource& bis)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->stock[i])
			delete stock[i];
		if (bis.getStock(i))
			stock[i] = bis.getStock(i)->clone();
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (m)
	{
		if (in < 4)
		{
			stock[in] = m;
			in++;
			return ;
		}
		if (in == 4)
			std::cout << "Stock is full." << std::endl;
	}
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (stock[i] && stock[i]->getType() == type)
			return (stock[i]->clone());
	}
	return (0);
}

AMateria* MateriaSource::getStock(int index)
{
	return (stock[index]);
}
