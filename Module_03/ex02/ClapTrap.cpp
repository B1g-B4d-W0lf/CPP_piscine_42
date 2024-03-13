#include "Includes/ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor has made a ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(std::string naming)
{
	std::cout << "Naming constructor has made a ClapTrap" << std::endl;
	name = naming;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor has destroyed a ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& bis)
{
	std::cout << "Copy constructor has been called" << std::endl;
	*this = bis;
}

ClapTrap& ClapTrap::operator=(ClapTrap& bis)
{
	//std::cout << "operator = called" << std::endl;
	name = bis.name;
	attp = bis.attp;
	hp = bis.hp;
	ep = bis.ep;

	return (*this);
}

void ClapTrap::attack(const std::string& target)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << name << " attacks " << target << ", causing " << attp << " of damage!" << std::endl;
		ep --;
	}
	else 
		std::cout << name << " is too exhausted to attack " << target << "!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hp >= amount)
	{
		std::cout << name << " takes " << amount << " damage!" << std::endl;
		hp -= amount;
	}
	else if (hp < amount)
	{
		std::cout << name << " takes " << amount << " damage!" << std::endl;
		hp = 0;
	}
	if (hp == 0)
		std::cout << name << " is defeated.." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ep > 0 && hp > 0)
	{
		std::cout << name << " has regained " << amount << " of hit points!" << std::endl;
		hp += amount;
	}
	else 
		std::cout << name << " cannot be salvaged.." << std::endl;
}

//######################## SET & GET ########################

std::string	ClapTrap::getname()
{
	return(name);
}

int	ClapTrap::gethp()
{
	return(hp);
}

int	ClapTrap::getep()
{
	return(ep);
}

int	ClapTrap::getattp()
{
	return(attp);
}

void ClapTrap::setname(std::string naming)
{
	name = naming;
}

void ClapTrap::sethp(int newhp)
{
	hp = newhp;
}

void ClapTrap::setep(int newep)
{
	ep =newep;
}

void ClapTrap::setattp(int newattp)
{
	attp = newattp;
}
