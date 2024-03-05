#include "Includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor has made a DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string naming)
{
	std::cout << "Naming constructor has made a DiamondTrap" << std::endl;
	sethp(100);
	setep(50);
	setattp(30);
	if (naming.empty())
		setname(name);
	else
		setname(naming);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor has destroyed a DiamondTrap" << std::endl;
}

DiamondTrap(DiamondTrap& bis)
{
	std::cout << "Copy constructor has made a DiamondTrap" << std::endl;
	*this = bis;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& bis)
{
	setname(bis.name);
	sethp(bis.hp);
	setep(bis.ep);
	setattp(bis.attp);

	return (*this);
}

void DiamondTrap::whoAmI()
{

}
