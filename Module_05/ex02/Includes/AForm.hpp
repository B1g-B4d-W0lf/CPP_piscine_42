#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class AForm
{
	public :
// CANON & CONSTRUCTORS
		AForm(std::string naming, int gradsign, int gradexec);
		virtual ~AForm();
		AForm(AForm& bis);
		AForm& operator=(AForm& bis);
		
// FUNCTIONS
		int getGradeSign() const;
		int getGradeExec() const;
		std::string getName() const;
		bool getStatus() const;
		bool beSigned(Bureaucrat &bur);
		virtual void execute(Bureaucrat const &executor) const;
		
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *what() const throw();
	};

	private :
		const std::string	name;
		const int			gradesign;
		const int			gradeexec;
		bool				issigned;

};

std::ostream &operator<<(std::ostream &nstream, AForm &f); 

#endif