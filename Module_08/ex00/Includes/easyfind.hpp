#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

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

	for (it = con.begin(); it != con.end(); it++)
	{
		// std::cout << *it << std::endl;
 		if (*it == n)
			return ;
	}
	throw ErrorNotFound();
}

#endif