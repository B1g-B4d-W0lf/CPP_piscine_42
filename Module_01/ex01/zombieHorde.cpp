#include "Includes/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zomb;
	int	i = 0;
	
	if (N < 0)
		return (NULL);
	zomb = new Zombie[N];
	while (i < N)
	{
		zomb[i].setname(name);
		i++;
	}
	return (zomb);
}