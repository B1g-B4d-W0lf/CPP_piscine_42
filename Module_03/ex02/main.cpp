#include "Includes/ClapTrap.hpp"
#include "Includes/FragTrap.hpp"

int	main()
{
	FragTrap	one("Lucius");
	FragTrap	two("Malfoy");
	FragTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Malfoy");
	two.attack("Lucius");
	three.highFivesGuys();
	std::cout << std::endl;
	//std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	

	return (0);
}