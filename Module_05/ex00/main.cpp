#include "Bureaucrat.hpp"

int	main()
{
try
	{
		Bureaucrat	paul("Muah'dib", 3);
		//Bureaucrat	paulb(paul);
		//std::cout << paulb << std::endl;
		std::cout << paul << std::endl;
		paul.upGrade();
		std::cout << paul << std::endl;
		paul.upGrade();
		std::cout << paul << std::endl;
		paul.upGrade();
		
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
try
	{
		Bureaucrat	pin("Pinocchio", 148);
		std::cout << pin << std::endl;
		pin.downGrade();
		std::cout << pin << std::endl;
		pin.downGrade();
		std::cout << pin << std::endl;
		pin.downGrade();
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
try
	{
		Bureaucrat	pooh("Winnie", 1000);
		std::cout << pooh << std::endl;
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
}