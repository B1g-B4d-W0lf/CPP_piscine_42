#include "Includes/Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	type = "Cat";
	brain = new Brain(); 
	brain->addThoughts("I WANT to burn the world");
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

Cat::Cat(Cat& bis)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = bis;
}

Cat& Cat::operator=(Cat& bis)
{
	type = bis.type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "Cat is saying : " << std::endl;
	brain->sayThought(0);
}

