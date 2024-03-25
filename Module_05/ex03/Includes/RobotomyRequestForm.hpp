#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public :
// CANON & CONSTRUCTORS
		RobotomyRequestForm(std::string thetarget);
		~RobotomyRequestForm();
		RobotomyRequestForm(RobotomyRequestForm& bis);
		RobotomyRequestForm& operator=(RobotomyRequestForm& bis);

// FUNCTIONS
		void execute(Bureaucrat const &executor) const;
		std::string getTarget();

	private :
		std::string	target;
};

#endif