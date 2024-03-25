#include "Includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string thetarget) : AForm("Robotimization", 72, 45)
{
	//std::cout << "RRF constructor called" << std::endl;
	target = thetarget;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	//std::cout << "RRF destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& bis) : AForm("Robotomization", 72, 45)
{
	//std::cout << "RRF copy constructor called" << std::endl;
	*this = bis;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm& bis)
{
	target = bis.target;
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const 
{
	time_t 				timestamp = time(NULL);
	struct 				tm *time = localtime(&timestamp);
	int					i = time->tm_sec;

	std::cout << "* Makes some drilling noises *" << std::endl;
	if ((i % 2) != 0)
		std::cout << target << " has been robotomized successfully thanks to " << executor.getName() << "." << std::endl;
	else 
		std::cout << target << " has failed being robotomized successfully, no thanks to " << executor.getName() << "." << std::endl;
}

std::string RobotomyRequestForm::getTarget()
{
	return (target);
}