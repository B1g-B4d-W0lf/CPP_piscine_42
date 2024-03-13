#include "Includes/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
	i = 0;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(Brain& bis)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = bis;
}

Brain& Brain::operator=(Brain& bis)
{
	for (int j = 0; j <= 100; j++)
		ideas[j] = bis.ideas[j];
	return (*this);
}

void Brain::addThoughts(std::string thought)
{
	if (i >= 100)
		std::cout << "Brain is full" << std::endl;
	else
	{
		ideas[i] = thought;
		i++;
	}
}

void Brain::sayThought(int j)
{
	std::cout << ideas[j] << std::endl;
}
