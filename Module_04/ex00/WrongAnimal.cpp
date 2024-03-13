#include "Includes/WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& bis)
{
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = bis;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& bis)
{
	type = bis.type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal is making Non-Animal noise" << std::endl;
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}
