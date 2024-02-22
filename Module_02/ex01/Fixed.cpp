#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& bis)
{
	std::cout << "Copy constructor called" << std::endl;
	number = bis.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed& bis)
{
	std::cout << "Copy assignement operator called on " << &bis << std::endl;
	number = bis.getRawBits();
	return(*this);
}

Fixed(int const i);
{
	std::cout << "Int constructor called" << std::endl;
	number = i;
}

Fixed(float const f);
{
	std::cout << "Float constructor called" << std::endl;
	number = f;
}

int	Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void	Fixed::setRawBits(int const raw)
{
	number = raw;
}

float	toFloat(void);
{

}

int		toInt(void);
{

}
