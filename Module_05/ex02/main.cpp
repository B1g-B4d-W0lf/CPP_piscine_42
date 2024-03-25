#include "Includes/Bureaucrat.hpp"
#include "Includes/AForm.hpp"
#include "Includes/PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
try
	{
		Bureaucrat	paul("Muah'dib", 1);
		std::cout << paul << std::endl;
		PresidentialPardonForm hl("Pinocchio");
		std::cout << hl << std::endl;
		paul.signForm(hl);
		paul.executeForm(hl);
		std::cout << std::endl;
		RobotomyRequestForm rf("Wolverine");
		std::cout << rf << std::endl;
		paul.signForm(rf);
		paul.executeForm(rf);
		std::cout << std::endl;
		ShrubberyCreationForm cf("Stilgard");
		std::cout << cf << std::endl;
		paul.signForm(cf);
		paul.executeForm(cf);
		
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
		PresidentialPardonForm hl("HolyWar");
		std::cout << hl << std::endl;
		pin.signForm(hl);
		pin.executeForm(hl);
		
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
		AForm		hl("HolyWar", 1, 1);
		std::cout << hl << std::endl;
		pooh.signForm(hl);
		
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}