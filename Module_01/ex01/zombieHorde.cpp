#include "Includes/Zombie.hpp"

Zombie*	Zombie::zombieHorde(int N, std::string name)
{
	Zombie	*zomb = new Zombie[N];
	int	i = 0;

	while (i < N)
	{
		zomb[i].setname(name);
		zomb[i].announce();
		i++;
	}
	return (zomb);
}