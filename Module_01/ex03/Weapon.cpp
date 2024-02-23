#include "Includes/Weapon.hpp"
#include "Includes/HumanA.hpp"
#include "Includes/HumanB.hpp"

Weapon::Weapon(std::string weapon)
{
	setType(weapon);
	return;
}

Weapon::~Weapon(void)
{
	return;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	Weapon::getType(void)
{
	return(this->type);
}