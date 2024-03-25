#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public :
// CANON & CONSTRUCTORS
		PresidentialPardonForm(std::string thetarget);
		~PresidentialPardonForm();
		PresidentialPardonForm(PresidentialPardonForm& bis);
		PresidentialPardonForm& operator=(PresidentialPardonForm& bis);

// FUNCTIONS
		void execute(Bureaucrat const &executor) const;
		std::string getTarget();

	private :
		std::string	target;
};

#endif