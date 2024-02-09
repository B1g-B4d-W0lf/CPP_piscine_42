#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

HumanA::HumanA(std::string name, Weapon& type): thing(type)
{
	this->name = name;
	this->thing = type;
	return;
}

HumanA::~HumanA(void)
{
	return;
}

std::string	HumanA::getName(void)
{
	return (this-> name);
}

void	HumanA::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->thing.getType() << std::endl;
}