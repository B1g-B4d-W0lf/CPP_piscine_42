#include "Includes/Data.hpp"
#include "Includes/Serializer.hpp"

int	main()
{
	Data 		test;
	Data		*dessert;
	uintptr_t	u;

	test.one = 1;
	test.name = "Gautier";
	test.c = 'A';

	std::cout << test.name << std::endl;
	std::cout << test.one << std::endl;
	std::cout << test.c << std::endl;

	u = Serializer::serialize(&test);
	std::cout << u << std::endl;

	dessert = Serializer::deserialize(u);
	std::cout << dessert->name << std::endl;
	std::cout << dessert->one << std::endl;
	std::cout << dessert->c << std::endl;

	return (0);
}