#include "Includes/Bureaucrat.hpp"
#include "Includes/AForm.hpp"
#include "Includes/PresidentialPardonForm.hpp"
#include "Includes/RobotomyRequestForm.hpp"
#include "Includes/ShrubberyCreationForm.hpp"
#include "Includes/Intern.hpp"

int	main()
{
try
	{
		Bureaucrat	paul("Muah'dib", 1);
		Intern		slave;
		AForm *hl;
		hl = slave.makeForm("presidential pardon", "Pinocchio");
		if (hl == NULL)
		{
			delete hl;
			return (1);
		}
		
		std::cout << paul << std::endl;
		std::cout << *hl << std::endl;
		paul.signForm(*hl);
		paul.executeForm(*hl);
		delete hl;
	}
catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}

}