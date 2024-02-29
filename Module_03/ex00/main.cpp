#include "Includes/ClapTrap.hpp"

int	main()
{
	ClapTrap	one("Lucius");
	ClapTrap	two("Malfoy");
	ClapTrap	three(one);

	std::cout << "\n ### STANDARD TEST ### \n" << std::endl;
	one.attack("Malfoy");
	two.takeDamage(0);
	two.attack("Lucius");
	std::cout << "\n ### JUST FOR FUN TEST ### \n" << std::endl;
	one.takeDamage(10);
	one.beRepaired(10);
	three.beRepaired(0);
	std::cout << std::endl;

	return (0);
}