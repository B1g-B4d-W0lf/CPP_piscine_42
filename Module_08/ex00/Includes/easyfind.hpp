#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class ErrorNotFound : public std::exception
{
	public :
		virtual const char *what() const throw()
		{
			return ("Number not found.");
		}
};

template <typename T>
void	easyfind(T& con, int n)
{
	typename T::iterator	it;

	it = std::find( con.begin(), con.end(), n);
	if (*it == n)
		return ;
	throw ErrorNotFound();
}

#endif