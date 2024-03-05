#include "Includes/ClapTrap.hpp"
#include "Includes/DiamondTrap.hpp"

void	status(std::string name, int ep, int attp, int hp)
{
	std::cout << "Current status of " << name << " is :" << std::endl;
	std::cout << hp << " Hit Points" << std::endl;
	std::cout << ep << " Energy Points" << std::endl;
	std::cout << attp << " Attack Points" << std::endl;
}

int	main()
{
	DiamondTrap	one("Lucius");
	DiamondTrap	two("Draco");
	DiamondTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Draco");
	two.takeDamage(20);
	two.attack("Lucius");
	one.takeDamage(20);
	three.highFivesGuys();
	status(two.getname(), two.getep(), two.getattp(), two.gethp());
	std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	one.takeDamage(80);
	one.beRepaired(10);
	three.beRepaired(20);
	status(three.getname(), three.getep(), three.getattp(), three.gethp());
	std::cout << std::endl;
	

	return (0);
}