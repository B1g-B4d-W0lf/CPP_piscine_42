#include "Includes/Zombie.hpp"

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie	*zomb = new Zombie;

	zomb->setname(name);
	return (zomb);
}