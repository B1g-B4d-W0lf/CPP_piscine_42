#include "Includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(Animal& bis)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = bis;
}

Animal& Animal::operator=(Animal& bis)
{
	type = bis.type;
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "Animal is making... a sound?" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
