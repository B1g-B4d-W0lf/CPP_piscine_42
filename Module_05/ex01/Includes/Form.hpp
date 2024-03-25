#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>

class Form
{
	public :
// CANON & CONSTRUCTORS
		Form(std::string naming, int gradsign, int gradexec);
		~Form();
		Form(Form& bis);
		Form& operator=(Form& bis);
		
// FUNCTIONS
		int getGradeSign();
		int getGradeExec();
		std::string getName();
		bool getStatus();
		bool beSigned(Bureaucrat &bur);
		
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

std::ostream &operator<<(std::ostream &nstream, Form &f); 

#endif