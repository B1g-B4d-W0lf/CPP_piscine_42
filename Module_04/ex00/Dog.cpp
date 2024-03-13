#include "Includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog(Dog& bis)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = bis;
}

Dog& Dog::operator=(Dog& bis)
{
	type = bis.type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "Dog is saying : Wooof Woof" << std::endl;
}
