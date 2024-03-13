#include "Includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	type = "Dog";
	brain = new Brain();
	brain->addThoughts("I don't want to burn the world");
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
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
	std::cout << "Dog is saying : " << std::endl;
	brain->sayThought(0);
}
