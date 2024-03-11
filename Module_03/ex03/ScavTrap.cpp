#include "Includes/ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default constructor has made a ScavTrap" << std::endl;
	sethp(100);
	setep(50);
	setattp(20);
	setname("DefaultScav");
}

ScavTrap::ScavTrap(std::string naming)
{
	std::cout << "Naming constructor has made a ScavTrap" << std::endl;
	sethp(100);
	setep(50);
	setattp(20);
	if (naming.empty())
		setname(name);
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
	setname(bis.name);
	sethp(bis.hp);
	setep(bis.ep);
	setattp(bis.attp);

	return (*this);
}

void ScavTrap::attack(const std::string& target)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << name << " savagely pounce on " << target << ", causing " << attp << " of damage!" << std::endl;
		ep--;
	}
	else 
		std::cout << name << " is spent and can no longer attack " << target << "!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << name << " is now in Gate Keeper mode" << std::endl;
	std::cout << "*YOU SHALL NOT PASS*" << std::endl;
}
