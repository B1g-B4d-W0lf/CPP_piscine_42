#include "Includes/ClapTrap.hpp"

void	status(std::string name, int ep, int attp, int hp)
{
	std::cout << "Current status of " << name << " is :" << std::endl;
	std::cout << hp << " Hit Points" << std::endl;
	std::cout << ep << " Energy Points" << std::endl;
	std::cout << attp << " Attack Points" << std::endl;
}

int	main()
{
	ClapTrap	one("Lucius");
	ClapTrap	two("Draco");
	ClapTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Draco");
	two.takeDamage(0);
	two.attack("Lucius");
	status(one.getname(), one.getep(), one.getattp(), one.gethp());
	std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	one.takeDamage(10);
	one.beRepaired(10);
	three.beRepaired(0);
	std::cout << std::endl;

	return (0);
}