#include "Includes/RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Use is : ./RNP [operation]" << std::endl, 1);
	try
	{
		RPN	result(av[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	return (0);
}