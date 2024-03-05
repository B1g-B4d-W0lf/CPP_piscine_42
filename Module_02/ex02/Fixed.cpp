#include "Includes/Fixed.hpp"

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	number = 0;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& bis)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = bis;
}

Fixed&	Fixed::operator=(const Fixed& bis)
{
	//std::cout << "Copy assignement operator called" << std::endl;
	number = bis.getRawBits();
	return(*this);
}

Fixed::Fixed(int const i)
{
	//std::cout << "Int constructor called" << std::endl;
	number = i << bit;
}

Fixed::Fixed(float const f)
{
	//std::cout << "Float constructor called" << std::endl;
	number = (int)roundf(f * (1 << bit));
}

int	Fixed::getRawBits() const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (number);
}

void	Fixed::setRawBits(int const raw)
{
	number = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)number / (float)(1 << bit));
}

int		Fixed::toInt(void) const
{
	return ((int)number >> bit);
}

//compare __________________________________

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.number > second.number)
		return (second);
	return (first);
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.number > second.number)
		return (first);
	return (second);
}
		
const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first.number > second.number)
		return (second);
	return (first);
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first.number > second.number)
		return (first);
	return (second);
}

//operators ______________________________________

bool	Fixed::operator==(const Fixed& bis) const
{
	return getRawBits() == bis.getRawBits();
}

bool	Fixed::operator<(const Fixed& bis) const
{
	return getRawBits() < bis.getRawBits();
}

bool	Fixed::operator>(const Fixed& bis) const
{
	return getRawBits() > bis.getRawBits();
}

bool	Fixed::operator!=(const Fixed& bis) const
{
	return getRawBits() != bis.getRawBits();
}

bool	Fixed::operator<=(const Fixed& bis) const
{
	return getRawBits() <= bis.getRawBits();
}

bool	Fixed::operator>=(const Fixed& bis) const
{
	return getRawBits() >= bis.getRawBits();
}

Fixed	Fixed::operator+(const Fixed& bis) const
{
	return(Fixed(this->toFloat() + bis.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& bis) const
{
	return(Fixed(this->toFloat() - bis.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& bis) const
{
	return(Fixed(this->toFloat() * bis.toFloat()));
}

Fixed	Fixed::operator/(const Fixed& bis) const
{
	return(Fixed(this->toFloat() / bis.toFloat()));
}

Fixed&	Fixed::operator++()
{
	number += 1;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	tmp(*this);

	tmp.setRawBits(this->number++);
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	number -= 1;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp(*this);

	tmp.setRawBits(this->number--);
	return (tmp);
}

std::ostream&	operator<<(std::ostream& ob, const Fixed& fi)
{
	ob << fi.toFloat();
	return (ob);
}