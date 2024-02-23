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
		Fixed&	operator=(const Fixed& bis);
		~Fixed();
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