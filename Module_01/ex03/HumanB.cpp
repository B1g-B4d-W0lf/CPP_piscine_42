#include "Includes/Weapon.hpp"
#include "Includes/HumanA.hpp"
#include "Includes/HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return;
}

HumanB::~HumanB(void)
{
	return;
}

std::string	HumanB::getName(void)
{
	return (this-> name);
}

void	HumanB::setWeapon(Weapon& type)
{
	this->thing = &type;
}

void	HumanB::attack(void)
{
	std::cout << this->getName() << " attacks with their " << this->thing->getType() << std::endl;
}
