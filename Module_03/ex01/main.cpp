#include "Includes/ClapTrap.hpp"
#include "Includes/ScavTrap.hpp"

int	main()
{
	ScavTrap	one("Lucius");
	ScavTrap	two("Malfoy");
	ScavTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Malfoy");
	two.attack("Lucius");
	three.guardGate();
	std::cout << std::endl;
	//std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	

	return (0);
}