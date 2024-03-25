#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
try
	{
		Bureaucrat	paul("Muah'dib", 1);
		std::cout << paul << std::endl;
		Form		hl("HolyWar", 1, 1);
		std::cout << hl << std::endl;
		paul.signForm(hl);
		
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
		Form		hl("HolyWar", 0, 1);
		std::cout << hl << std::endl;
		pin.signForm(hl);
		
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
		Form		hl("HolyWar", 1, 1);
		std::cout << hl << std::endl;
		pin.signForm(hl);
		
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}