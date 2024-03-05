#include "Includes/Fixed.hpp"
#include "Includes/Point.hpp"

int main() 
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	point(9.4, 0.5);
	bool	res;

	
	res = bsp(a, b, c, point);
	if (res)
		std::cout << "This point is in the triangle" << std::endl;
	else 
		std::cout << "This point is.. NOT! In the triangle"<< std::endl;

	return 0;
}
