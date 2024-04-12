#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <iomanip>
#include <cctype>
#include <string>
#include <limits>

class ScalarConverter
{
	public :
		static void convert(std::string& str);

	private :
// CANON & CONSTRUCTORS
		ScalarConverter();
		~ScalarConverter();
		ScalarConverter(ScalarConverter& bis);
		ScalarConverter& operator=(ScalarConverter& bis);

		bool doubleCheck(std::string str, std::string type);
		std::string identifier(std::string str);
		void isChar(std::string str);
		void isFloat(float f);
		void isDouble(double d);
		void isInt(int i);
		void isSpeDouble(std::string str);
		void isSpeFloat(std::string str);
		
};

#endif