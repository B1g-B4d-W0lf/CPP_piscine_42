#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Form;

class Bureaucrat
{
	public :
// CANON & CONSTRUCTORS
		Bureaucrat(std::string naming, int grading);
		~Bureaucrat();
		Bureaucrat(Bureaucrat& bis);
		Bureaucrat& operator=(Bureaucrat& bis);
		
// FUNCTIONS
		int getGrade();
		std::string getName();
		void upGrade();
		void downGrade();
		void signForm(Form &f);
		
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
		int					grade;
};

std::ostream &operator<<(std::ostream &nstream, Bureaucrat &b); 

#endif