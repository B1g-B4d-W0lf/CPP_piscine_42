#include "Includes/Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	try
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::vector<int>			adding;
		Span 						sp(15000);

		srand(time(NULL));
		sp.addNumber(rand());
		sp.addNumber(rand());
		for (int i = 0; i < 14998; i++)
			adding.push_back(rand());
		sp.addMore(adding.begin(), adding.end());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Span sp(1);

		srand(time(NULL));
		sp.addNumber(rand());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	try
	{
		Span sp(100);

		srand(time(NULL));
		for (int i = 0; i < 100; i++)
			sp.addNumber(rand());

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
