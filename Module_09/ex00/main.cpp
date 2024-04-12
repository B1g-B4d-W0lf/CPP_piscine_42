#include "Includes/BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return (std::cout << "Use is : ./btc [*.csv]" << std::endl, 1);

	std::ifstream					ifs(av[1]);
	std::map<std::string, float>	source;

	if (!ifs.is_open())
		return (std::cout << "Cannot open file" << std::endl), 1;
	try
	{
		source = BitcoinExchange::sourceparse();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		return (0);
	}
	BitcoinExchange::compare(ifs, source);

	return (0);

}