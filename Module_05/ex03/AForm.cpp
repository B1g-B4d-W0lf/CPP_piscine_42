#include "Includes/Bureaucrat.hpp"
#include "Includes/AForm.hpp"

AForm::AForm(std::string naming, int gradsign, int gradexec) : name(naming), gradesign(gradsign), gradeexec(gradexec)
{
	//std::cout << "AForm constructor called" << std::endl;
	if (gradsign < 1 ||  gradexec < 1)
		throw GradeTooHighException();
	if (gradsign > 150 || gradexec > 150 )
		throw GradeTooLowException();
	issigned = false;
}

AForm::~AForm()
{
	//std::cout << "AForm destructor called" << std::endl;
}

AForm::AForm(AForm& bis) : name(bis.getName()), gradesign(bis.getGradeSign()), gradeexec(bis.getGradeExec())
{
	//std::cout << "AForm copy constructor called" << std::endl;
	issigned = bis.getStatus();
}

AForm& AForm::operator=(AForm& bis)
{
	issigned = bis.getStatus();
	return (*this);
}

int AForm::getGradeSign() const
{
	return (gradesign);
}

int AForm::getGradeExec() const
{
	return (gradeexec);
}

std::string AForm::getName() const
{
	return (name);
}

bool AForm::getStatus() const
{
	return (issigned);
}

bool AForm::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() <= gradesign)
		issigned = true;
	else 
		throw Bureaucrat::GradeTooLowException();
	return (issigned);
}

void AForm::execute(Bureaucrat const & executor) const
{
	std::cout << executor.getName() << " says \" BOOM Bitch \" " << std::endl;
}

const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low (Aform)");
}

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high (Aform)");
}

std::ostream &operator<<(std::ostream &nstream, AForm &f)
{
	nstream << "Form " << f.getName() << " needs grade " << f.getGradeSign() << 
	" to be signed and " << f.getGradeExec() << " to execute.";
	return (nstream);
}
