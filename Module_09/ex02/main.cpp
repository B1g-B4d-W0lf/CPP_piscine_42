#include "Includes/PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac < 2)
		return (std::cout << "Use is : ./PmergeMe [arg] ..." << std::endl, 0);
	try
	{
		PmergeMe it(ac, av);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}

