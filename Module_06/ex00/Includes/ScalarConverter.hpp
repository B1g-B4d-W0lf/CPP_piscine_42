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

		static bool doubleCheck(std::string str, std::string type);
		static std::string identifier(std::string str);
		static void isChar(std::string str);
		static void isFloat(float f);
		static void isDouble(double d);
		static void isInt(int i);
		static void isSpeDouble(std::string str);
		static void isSpeFloat(std::string str);
		
};

#endif