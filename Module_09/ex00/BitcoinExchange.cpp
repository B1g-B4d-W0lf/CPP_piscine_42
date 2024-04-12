#include "Includes/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	
}

BitcoinExchange::~BitcoinExchange()
{

}

BitcoinExchange::BitcoinExchange(BitcoinExchange& bis)
{
	*this = bis;
}

BitcoinExchange& BitcoinExchange::operator=(BitcoinExchange& bis)
{
	if (&bis != this)
		(void) bis;
	return (*this);
}

std::string parsedate(std::string temp)
{
	char		*date = NULL;
	
	if (temp.empty() || temp.size() < 12)
		throw BitcoinExchange::UnvalidContent();
	temp.copy(date, 10, 0);
	std::cout << temp << std::endl;

	return (temp);
}

float parsechange(std::string temp)
{
	(void) temp;
	return (0);
}

std::map<std::string, float> BitcoinExchange::sourceparse()
{
	std::ifstream					file("data.csv");
	std::string						temp;
	std::string						date;
	float							change;
	std::map<std::string, float>	source;
	
	if (!file.is_open())
		throw UnvalidOpening();
	getline(file, temp);
	while (getline(file, temp))
	{
		date = parsedate(temp);
		change = parsechange(temp);
		(void) change;
		source[date] = change;
	}

	return (source);
}

void BitcoinExchange::compare(std::ifstream& file, std::map<std::string, float> source)
{
	(void) file;
	(void) source;
	return;
}

const char *BitcoinExchange::UnvalidFormat::what() const throw()
{
	return ("An error has been detected in the file format.");
}

const char *BitcoinExchange::UnvalidContent::what() const throw()
{
	return ("An error has been detected in the file content.");
}

const char *BitcoinExchange::UnvalidOpening::what() const throw()
{
	return ("Cannot open source file");
}
