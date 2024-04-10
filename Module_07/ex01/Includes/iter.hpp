#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, int length, void (*fct)(T& var))
{
	for (int i = 0; i < length; i++)
		fct(array[i]);
}

template <typename T>
void printit(T& c)
{
	std::cout << c << std::endl;
}

#endif