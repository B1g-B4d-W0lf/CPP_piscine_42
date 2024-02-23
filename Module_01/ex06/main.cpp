#include "Includes/Harl.hpp"

int	findlevel(std::string av)
{
	std::string		source[5];

	source[0] = "DEBUG";
	source[1] = "INFO";
	source[2] = "WARNING";
	source[3] = "ERROR";
	
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == av)
			return (i);
	}
	return (4);
}

int	main(int ac, char **av)
{
	Harl	test;
	int		i;

	if (ac != 2)
	{
		std::cout << "./prog [Level of distress]" << std::endl;
		return (0);
	}
	i = findlevel(av[1]);
	if (i == 4)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
		return (0);
	}
	test.complain(i);

	return (0);
}
