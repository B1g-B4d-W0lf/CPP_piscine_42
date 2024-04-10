#include "Includes/ScalarConverter.hpp"

int main(int ac, char** av)
{
	if (ac != 2)
		return (std::cout << "Invalid number of arguments." << std::endl, 1);

	std::string str(av[1]);

	if (str.empty())
		return (std::cout << "Error, argument NULL" << std::endl, 1);
	ScalarConverter::convert(str);
	return (0);
}
