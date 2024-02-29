#include "Includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor has made a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(std::string naming)
{
	std::cout << "Naming constructor has made a ScavTrap" << std::endl;
	sethp(100);
	setep(50);
	setattp(20);
	if (naming.empty())
		setname(getname());
	else
		setname(naming);
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor has destroyed a ScavTrap" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& bis)
{
	std::cout << "Copy constructor has made a ScavTrap" << std::endl;
	*this = bis;
}

ScavTrap& ScavTrap::operator=(ScavTrap& bis)
{
	setname(bis.getname());
	sethp(bis.gethp());
	setep(bis.getep());
	setattp(bis.getattp());

	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
if (getep() > 0 && gethp() > 0)
	{
		std::cout << "ScavTrap " << getname() << " attacks " << target << ", causing " << getattp() << " of damage!" << std::endl;
		setep(getep() - 1);
	}
	else 
		std::cout << "ScavTrap " << getname() << " is too exhausted to attack " << target << "!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate Keeper mode" << std::endl;
	std::cout << "*YOU SHALL NOT PASS*" << std::endl;
}

