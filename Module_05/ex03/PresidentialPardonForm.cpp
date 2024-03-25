#include "Includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string thetarget) : AForm("Presidential Pardon", 25, 5)
{
	//std::cout << "PPF constructor called" << std::endl;
	target = thetarget;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	//std::cout << "PPF destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& bis) : AForm("Presidential Pardon", 25, 5)
{
	//std::cout << "PPF copy constructor called" << std::endl;
	*this = bis;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm& bis)
{
	target = bis.target;
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const 
{
	std::cout << target << " has been pardoned by Zaphod Beeblebrox thanks to " << executor.getName() << "." << std::endl;
}

std::string PresidentialPardonForm::getTarget()
{
	return (target);
}
