#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include "AForm.hpp"

class Intern
{
	public :
// CANON & CONSTRUCTORS
		Intern();
		~Intern();
		Intern(Intern& bis);
		Intern& operator=(Intern& bis);

// FUNCTIONS
		AForm* makeForm(std::string name, std::string target);

// VARIABLES
		std::string source[3];

};

#endif