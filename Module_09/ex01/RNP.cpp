#include "Includes/RNP.hpp"

RNP::RNP()
{
}

RNP::~RNP(){}

RNP::RNP(RNP& bis)
{
	*this = bis;
}

RNP& RNP::operator=(RNP& bis)
{
	(void)bis;
	return (*this);
}

std::stack<int>	parse(std::string arg)
{

}

void	calculate(std::stack<int> rnp)
{
	
}