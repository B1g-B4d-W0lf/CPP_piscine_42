#include "Includes/Intern.hpp"
#include "Includes/AForm.hpp"
#include "Includes/PresidentialPardonForm.hpp"
#include "Includes/RobotomyRequestForm.hpp"
#include "Includes/ShrubberyCreationForm.hpp"

Intern::Intern()
{
	source[0] = "presidential pardon";
	source[1] = "robotomy request";
	source[2] = "shrubbery creation";
}

Intern::~Intern()
{
	return;
}

Intern::Intern(Intern& bis)
{
	*this = bis;
}

Intern& Intern::operator=(Intern& bis)
{
	source[0] = bis.source[0];
	source[1] = bis.source[1];
	source[2] = bis.source[2];
	return (*this);
}

AForm* Intern::makeForm(std::string name, std::string target)
{
	for (int i = 0; i < 4; i++)
	{
		if (source[i] == name)
		{
			std::cout << "Intern made form " << name << std::endl;
			switch(i)
			{
				case 0:
					return (new PresidentialPardonForm(target));
					break;
				case 1:
					return (new RobotomyRequestForm(target));
					break;
				case 2:
					return (new ShrubberyCreationForm(target));
					break;
			}
		}
	}
	std::cout << "Intern is a worthless incapable and couldn't make form " << name << std::endl;
	return (NULL);
}
