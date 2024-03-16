#include "Includes/WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat constructor called" << std::endl;
	type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& bis)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = bis;
}

WrongCat& WrongCat::operator=(WrongCat& bis)
{
	type = bis.type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "WrongCat is making Non-Cat noise" << std::endl;
}
