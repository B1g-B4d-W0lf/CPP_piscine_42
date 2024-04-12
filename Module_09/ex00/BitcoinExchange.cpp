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

std::string BitcoinExchange::parsedate(std::string temp)
{
	char		date[11];
	std::string	final;
	std::string	month;
	std::string	day;
	std::string	year;

	if (temp.empty() || temp.size() < 12)
		throw BitcoinExchange::UnvalidContent();
	temp.copy(date, 10, 0);
	final = date;
	year = final.substr(0,4);
	month = final.substr(5,2);
	day = final.substr(8,2);

	if (atoi(year.c_str()) < 2000 || atoi(year.c_str()) > 2023)
		throw BitcoinExchange::UnvalidContent();
	if (atoi(month.c_str()) < 1 || atoi(month.c_str()) > 12)
		throw BitcoinExchange::UnvalidContent();
	if (atoi(day.c_str()) < 1 || atoi(day.c_str()) > 31)
		throw BitcoinExchange::UnvalidContent();

	return (date);
}

float BitcoinExchange::parsechange(std::string temp)
{
	float		change;
	std::string		chg;
	char		*endptr;

	chg = temp.substr(11);
	change = strtof(chg.c_str(), &endptr);
	if (endptr[0] != '\0' || change < 0)
		throw BitcoinExchange::UnvalidContent();
	return (change);
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
