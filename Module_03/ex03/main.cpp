#include "Includes/ClapTrap.hpp"
#include "Includes/DiamondTrap.hpp"

int	main()
{
	DiamondTrap	one("Lucius");
	DiamondTrap	two("Draco");
	DiamondTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Draco");
	two.attack("Lucius");
	three.highFivesGuys();
	std::cout << std::endl;
	//std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	

	return (0);
}