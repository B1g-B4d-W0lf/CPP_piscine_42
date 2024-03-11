#include "Includes/DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "Default constructor has made a DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(std::string naming)
{
	std::cout << "Naming constructor has made a DiamondTrap" << std::endl;
	hp = this->FragTrap::hp;
	ep = this->ScavTrap::ep;
	attp = this->FragTrap::attp;
	if (naming.empty())
		setname(name);
	else
		setname(naming);
	name = "Diamond-" + naming;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Destructor has destroyed a DiamondTrap" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& bis)
{
	std::cout << "Copy constructor has made a DiamondTrap" << std::endl;
	*this = bis;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap& bis)
{
	setname(bis.ClapTrap::name);
	sethp(bis.hp);
	setep(bis.ep);
	setattp(bis.attp);

	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am both ClapTrap " << ClapTrap::name << " and DiamondTrap " << name << std::endl;
}
