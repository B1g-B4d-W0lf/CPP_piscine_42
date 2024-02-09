#include "Includes/Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie	zomb;

	zomb.setname(name);
	zomb.announce();
}