#include "Includes/Ice.hpp"

Ice::Ice() 
{
	//std::cout << "Ice constructor called" << std::endl;
	type = "ice";
}

Ice::~Ice()
{
	//std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(Ice& bis)
{
	//std::cout << "Ice copy constructor called" << std::endl;
	*this = bis;
}

Ice& Ice::operator=(Ice& bis)
{
	type = bis.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
