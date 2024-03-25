#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public :
// CANON & CONSTRUCTORS
		ShrubberyCreationForm(std::string thetarget);
		~ShrubberyCreationForm();
		ShrubberyCreationForm(ShrubberyCreationForm& bis);
		ShrubberyCreationForm& operator=(ShrubberyCreationForm& bis);

// FUNCTIONS
		void execute(Bureaucrat const &executor) const;
		std::string getTarget();

	private :
		std::string	target;
};

#endif