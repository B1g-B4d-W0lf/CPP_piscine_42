#include "Includes/easyfind.hpp"

int	main()
{
	std::vector<int>	vec;

	vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(5);
    vec.push_back(6);
    vec.push_back(8);

	try
	{
		easyfind(vec, 7);
		std::cout << "Found !" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		easyfind(vec, 5);
		std::cout << "Found !" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}