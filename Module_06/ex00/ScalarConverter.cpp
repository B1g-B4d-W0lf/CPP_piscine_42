#include "Includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
	return;
}

ScalarConverter::~ScalarConverter()
{
	return;
}

ScalarConverter::ScalarConverter(ScalarConverter& bis)
{
	*this = bis;
}

ScalarConverter& ScalarConverter::operator=(ScalarConverter& bis)
{
	(void)bis;
	return (*this);
}

void ScalarConverter::convert(std::string& str)
{
	std::string		type;
	char 			*end;
	int				i = 0;
	float			f = 0.0f;
	double			d = 0.0;
	ScalarConverter	scal;

	type = scal.identifier(str);
	if (type != "spe double" && type != "spe float")
	{
		if (!scal.doubleCheck(str, type))
		{
			std::cout << "Could not convert input <" << str << ">." << std::endl;
			// std::cout << str << " " << type << std::endl;
			return ;
		}
	}
	if (type == "int")
	{
		i = std::atoi(str.c_str());
		scal.isInt(i);
	}
	else if (type == "float" || type == "spe float")
	{
		if (type.find("spe") != std::string::npos)
			scal.isSpeFloat(str);
		else
		{
			f = std::strtof(str.c_str(), &end);
			scal.isFloat(f);
		}
	}
	else if (type == "double" || type == "spe double")
	{
		if (type.find("spe") != std::string::npos)
			scal.isSpeDouble(str);
		else
		{
			d = std::strtod(str.c_str(), &end);
			scal.isDouble(d);
		}
	}
	if (type == "char")
		scal.isChar(str);
	// std::cout << str << " " << type << std::endl;
	return ;
}

std::string ScalarConverter::identifier(std::string str)
{
	int			i;
	std::string	spe[6];

	spe[0] = "-inff";
	spe[1] = "+inff";
	spe[2] = "nanf";
	spe[3] = "-inf";
	spe[4] = "+inf";
	spe[5] = "nan";

	for (i = 0; i < 6; i++)
		if (spe[i] == str)
			break;
	if (i >= 0 && i < 3)
		return ("spe float");
	else if (i >= 3 && i < 6)
		return("spe double");
	else if (i == 6)
	{
		if (str.find(".") != std::string::npos && str.find("f") != std::string::npos)
			return ("float");
		else if (str.find(".") != std::string::npos && str.length() >= 3 \
			&& str.find("'") == std::string::npos)
			return ("double");
		else if (str.find(".") == std::string::npos && str.find("'") == std::string::npos \
			&& (std::isdigit(str[0]) || (str.length() >= 2 && std::isdigit(str[1]))))
			return ("int");
		else
			return ("char");
	}
	return ("invalid");
}

bool ScalarConverter::doubleCheck(std::string str, std::string type)
{
	long	nb;
	double	d;
	float	f;
	char	*c;

	if (type == "char")
	{
		if (str.length() == 1 && std::isprint(str[0]))
			return (true);
		else 
			return (false);
	}
	else if (type == "int")
	{
		nb = std::strtol(str.c_str(), &c, 10);
		if (nb > INT_MAX || nb < INT_MIN || *c != '\0')
			return (false);
		else
			return (true);
	}
	else if (type == "double")
	{
		d = std::strtod(str.c_str(), &c);
		if (*c != '\0' || !d)
			return (false);
		else 
			return (true);
	}
	else if (type == "float")
	{
		f = std::strtof(str.c_str(), &c);
		if ((*c == 'f' && *(c + 1) != '\0') || !f)
			return (false);
		else
			return (true);
	}
	return (false);
}

void ScalarConverter::isChar(std::string str)
{
	std::cout << "char: '" << str << "'" << std::endl;
	std::cout << "int:" << static_cast<int>(str[0]) << std::endl;
	std::cout << "float:" << std::fixed << std::setprecision(1) << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double:" << static_cast<double>(str[0]) << std::endl;
}

void ScalarConverter::isFloat(float f)
{
	bool print = std::fabs(f - static_cast<int>(f)) < 0.00000000001;

	if (std::isprint(f))
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else 
		std::cout << "char: non printable" << std::endl; 
	std::cout << "int:" << static_cast<int>(f) << std::endl;
	std::cout << "float:" << f << (print ? ".0f" : "f") << std::endl;
	std::cout << "double:" << static_cast<double>(f) << (print ? ".0" : "") << std::endl;
}

void ScalarConverter::isDouble(double d)
{
	bool print = std::fabs(d - static_cast<int>(d)) < 0.00000000001;

	if (std::isprint(d))
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else 
		std::cout << "char: non printable" << std::endl; 
	std::cout << "int:" << static_cast<int>(d) << std::endl;
	std::cout << "float:" << static_cast<float>(d) << (print ? ".0f" : "f") << std::endl;
	std::cout << "double:" << d << (print ? ".0" : "") << std::endl;
}

void ScalarConverter::isInt(int i)
{
	if (std::isprint(i))
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else 
		std::cout << "char: non printable" << std::endl; 
	std::cout << "int:" << i << std::endl;
	std::cout << "float:" << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double:" << static_cast<double>(i) << std::endl;
}

void ScalarConverter::isSpeDouble(std::string str)
{
	std::cout << "char:" << "impossible" << std::endl;
	std::cout << "int:" << "impossible" << std::endl;
	std::cout << "float:" << str + "f" << std::endl;
	std::cout << "double:" << str << std::endl;
}

void ScalarConverter::isSpeFloat(std::string str)
{
	std::cout << "char:" << "impossible" << std::endl;
	std::cout << "int:" << "impossible" << std::endl;
	std::cout << "float:" << str << std::endl;
	str.erase(str.length() - 1, 1);
	std::cout << "double:" << str << std::endl;
}
