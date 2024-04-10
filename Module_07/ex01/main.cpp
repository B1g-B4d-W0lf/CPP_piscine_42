#include "Includes/iter.hpp"
#include <iostream>

int main()
{
	int array[] = { 1, 2, 3, 4, 5, 6};
	char tab[] = { 'a', 'b', 'c', 'd', 'e', 'f'};

	iter(array, 6, &printit);
	std::cout << std::endl;
	iter(tab, 6, &printit);
}