#include "Includes/Bureaucrat.hpp"
#include "Includes/AForm.hpp"

Bureaucrat::Bureaucrat(std::string naming, int grading) : name(naming)
{
	//std::cout << "Bureaucrat constructor called" << std::endl;
	if (grading < 1)
		throw GradeTooHighException();
	if (grading > 150)
		throw GradeTooLowException();
	grade = grading;
}

Bureaucrat::~Bureaucrat()
{
	//std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& bis) : name(bis.getName())
{
	//std::cout << "Bureaucrat copy constructor called" << std::endl;
	*this = bis;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& bis)
{
	grade = bis.getGrade();
	return (*this);
}

int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

void Bureaucrat::upGrade()
{
	if (--grade < 1)
		throw GradeTooHighException();
}

void Bureaucrat::downGrade()
{
	if (++grade > 150)
		throw GradeTooLowException();
}

void Bureaucrat::signForm(AForm &f)
{
	if (f.getGradeSign() >= grade)
		std::cout << name << " signed form " << f.getName() << "." << std::endl;
	else 
		std::cout << name << " could not sign form " << f.getName() << " because they're too unsgnificant." << std::endl;
	f.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const &form) const
{
	if (grade <= form.getGradeExec() && form.getStatus() == true)
	{
		std::cout << name << " has executed form " << form.getName() << " with success." << std::endl;
		form.execute(*this);
	}
	else 
	{
		std::cout << name << " thought too highly of themselves and failed to execute form " << form.getName() << std::endl;
		throw GradeTooLowException();
	}
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
}

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
}

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &b)
{
	nstream << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (nstream);
}