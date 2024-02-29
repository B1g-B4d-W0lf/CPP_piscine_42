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
		setname(getname());
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
	setname(bis.getname());
	sethp(bis.gethp());
	setep(bis.getep());
	setattp(bis.getattp());

	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getname() << " wants a high five !" << std::endl;
}

