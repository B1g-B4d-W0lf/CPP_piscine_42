#include "Includes/ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string thetarget) : AForm("Shrubbery Creation", 145, 137)
{
	//std::cout << "SCF constructor called" << std::endl;
	target = thetarget;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	//std::cout << "SCF destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& bis) : AForm("Shrubbery Creation", 145, 137)
{
	//std::cout << "SCF copy constructor called" << std::endl;
	*this = bis;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm& bis)
{
	target = bis.target;
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const 
{
	std::string file = target + "_shrubbery";
	std::ofstream	output(file.c_str());
	if (!output.is_open() || executor.getGrade() > this->getGradeExec())
	{
		std::cout << "oops" << std::endl;
		return ;
	}
		
output <<"		       * *                " << std::endl;
output <<"          *    *  *             " << std::endl;
output <<"      *  *    *     *  *        " << std::endl;
output <<"     *     *    *  *    *       " << std::endl;
output <<"* *   *    *    *    *   *      " << std::endl;
output <<" *     *  *    * * .#  *   *    " << std::endl;
output <<" *   *     * #.  .# *   *       " << std::endl;
output <<"  *     \"#.  #: #\" * *    *     " << std::endl;
output <<" *   * * \"#. ##\"       *        " << std::endl;
output <<"   *       \"###                 " << std::endl;
output <<"             \"##                " << std::endl;
output <<"              ##.               " << std::endl;
output <<"              .##:              " << std::endl;
output <<"              :###              " << std::endl;
output <<"              ;###              " << std::endl;
output <<"            ,####.              " << std::endl;
output <<"          .######.              " << std::endl;

output.flush();
output.close();
}

std::string ShrubberyCreationForm::getTarget()
{
	return (target);
}
