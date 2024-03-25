#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form(std::string naming, int gradsign, int gradexec) : name(naming), gradesign(gradsign), gradeexec(gradexec)
{
	std::cout << "Form constructor called" << std::endl;
	if (gradsign < 1 ||  gradexec < 1)
		throw GradeTooHighException();
	if (gradsign > 150 || gradexec > 150 )
		throw GradeTooLowException();
	issigned = false;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form::Form(Form& bis) : name(bis.getName()), gradesign(bis.getGradeSign()), gradeexec(bis.getGradeExec())
{
	std::cout << "Form copy constructor called" << std::endl;
	issigned = bis.getStatus();
}

Form& Form::operator=(Form& bis)
{
	issigned = bis.getStatus();
	return (*this);
}

int Form::getGradeSign()
{
	return (gradesign);
}

int Form::getGradeExec()
{
	return (gradeexec);
}

std::string Form::getName()
{
	return (name);
}

bool Form::getStatus()
{
	return (issigned);
}

bool Form::beSigned(Bureaucrat &bur)
{
	if (bur.getGrade() <= gradesign)
		issigned = true;
	else 
		throw Bureaucrat::GradeTooLowException();
	return (issigned);
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low (form)");
}

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high (form)");
}

std::ostream &operator<<(std::ostream &nstream, Form &f)
{
	nstream << "Form " << f.getName() << " needs grade " << f.getGradeSign() << 
	" to be signed and " << f.getGradeExec() << " to execute.";
	return (nstream);
}
