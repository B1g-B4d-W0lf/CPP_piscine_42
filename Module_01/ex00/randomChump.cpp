#include "Includes/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zomb;

	zomb.setname(name);
	zomb.announce();
}