#include "Includes/AMateria.hpp"

AMateria::AMateria()
{
	//std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
	//std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(AMateria& bis)
{
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = bis;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

std::string const & AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Oooohhh " << target.getName() << std::endl;
}
