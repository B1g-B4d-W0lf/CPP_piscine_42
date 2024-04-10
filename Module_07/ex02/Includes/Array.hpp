#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private : 
		T	*array;
		unsigned int	_size;
	
	public :
		Array()
		{
			array = NULL;
			_size = 0;
		}

		Array(unsigned int n)
		{
			array = new T[n];
			_size = n;
		}

		Array(Array& bis)
		{
			*this = bis;
		}

		~Array() 
		{
			delete [] array;
		}

		Array& operator=(Array& bis)
		{
			array = new T[bis._size];
			_size = bis._size;
			for (unsigned int i = 0; i < bis._size; i++)
				array[i] = bis.array[i];
			return (*this);
		}

		T& operator[](unsigned int n)
		{
			if (n > _size)
				throw ErrorTabException();
			return (array[n]);
		}

		unsigned int size() {return (_size);}

		void printarray()
		{
			for (unsigned int i = 0; i < _size; i++)
				std::cout << "Element " << i << " = " << array[i] << std::endl;
		}

		class ErrorTabException : public std::exception
		{
			public :
				virtual const char *what() const throw()
				{
					return ("Not valid index");
				}
		};

};

#endif