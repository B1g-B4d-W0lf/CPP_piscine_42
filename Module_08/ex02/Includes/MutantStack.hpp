#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack()
		{
		}
		~MutantStack()
		{
		}
		MutantStack(MutantStack& bis)
		{
			*this = bis;
		}
		MutantStack& operator=(MutantStack& bis)
		{
			if (*this != bis)
				std::stack<T>::operator=(bis);
			return (*this);
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin()
		{
			return (std::stack<T>::c.begin());
		}
		iterator end()
		{
			return (std::stack<T>::c.end());
		}

	private :
};

#endif