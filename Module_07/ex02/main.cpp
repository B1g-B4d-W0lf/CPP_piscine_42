#include "Includes/Array.hpp"
#include <iostream>

int main()
{
	char c = 'a';
	int *j = new int();
	Array<char>	a(7);
	Array<int>	b(6);
	Array<int>	empty;

	std::cout << *j << std::endl;
	for (unsigned int i = 0; i < a.size(); i++)
	{
		a[i] = c++;
	}
	a.printarray();
	std::cout << std::endl;
	b.printarray();
	std::cout << std::endl;
	std::cout << empty.size() << std::endl;
	empty = b;
	std::cout << empty.size() << std::endl;
	for (unsigned int i = 0; i < empty.size(); i++)
	{
		empty[i] = i + 2;
	}
	empty.printarray();
	std::cout << std::endl;
	b.printarray();
	std::cout << std::endl;
	try
	{
		for (unsigned int i = 0; i <= 10; i++)
		{
			a[i] = c++;
		}
	}
	catch (std::exception& e) 
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}