#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(int const i);
		Fixed(float const f);
		Fixed(const Fixed& bis);
		~Fixed();

		Fixed&	operator=(const Fixed& bis);

		bool	operator==(const Fixed& bis) const;
		bool	operator<(const Fixed& bis) const;
		bool	operator>(const Fixed& bis) const;
		bool	operator!=(const Fixed& bis) const;
		bool	operator<=(const Fixed& bis) const;
		bool	operator>=(const Fixed& bis) const;

		Fixed	operator+(const Fixed& bis) const;
		Fixed	operator-(const Fixed& bis) const;
		Fixed	operator*(const Fixed& bis) const;
		Fixed	operator/(const Fixed& bis) const;

		Fixed&	operator++();
		Fixed	operator++(int); 
		Fixed&	operator--();
		Fixed	operator--(int);

		static Fixed &min(Fixed &first, Fixed &second);
		static Fixed &max(Fixed &first, Fixed &second);
		
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static const Fixed &max(Fixed const &first, Fixed const &second);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

	private:
		int					number;
		static int const	bit = 8;
};

std::ostream&	operator<<(std::ostream& ob, const Fixed& fi);

#endif