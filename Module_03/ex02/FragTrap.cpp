#include "Includes/FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default constructor has made a FragTrap" << std::endl;
}

FragTrap::FragTrap(std::string naming)
{
	std::cout << "Naming constructor has made a FragTrap" << std::endl;
	sethp(100);
	setep(100);
	setattp(30);
	if (naming.empty())
		setname(name);
	else
		setname(naming);
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor has destroyed a FragTrap" << std::endl;
}

FragTrap::FragTrap(FragTrap& bis)
{
	std::cout << "Copy constructor has made a FragTrap" << std::endl;
	*this = bis;
}

FragTrap& FragTrap::operator=(FragTrap& bis)
{
	setname(bis.name);
	sethp(bis.hp);
	setep(bis.ep);
	setattp(bis.attp);

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << name << " wants a high five !" << std::endl;
}

