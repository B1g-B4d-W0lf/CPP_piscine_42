#include "Includes/Cure.hpp"

Cure::Cure()
{
	//std::cout << "Cure constructor called" << std::endl;
	type = "cure";
}

Cure::~Cure()
{
	//std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(Cure& bis)
{
	//std::cout << "Cure copy constructor called" << std::endl;
	*this = bis;
}

Cure& Cure::operator=(Cure& bis)
{
	type = bis.getType();
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure());
}

void Cure::use(ICharacter& target)
{
	std::cout << "* Heals " << target.getName() << "'s wounds *" << std::endl;
}
