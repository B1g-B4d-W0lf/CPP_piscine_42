#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <map>
#include <iostream>
#include <fstream>
#include <string>

class BitcoinExchange
{
	public :
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(BitcoinExchange& bis);
		BitcoinExchange& operator=(BitcoinExchange& bis);
		static void compare(std::ifstream& file, std::map <std::string, float> source);
		static std::map<std::string, float> sourceparse();
	
		class UnvalidFormat : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class UnvalidContent : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};
		class UnvalidOpening : public std::exception
		{
			public :
				virtual const char *what() const throw();
		};

	private :

};

#endif