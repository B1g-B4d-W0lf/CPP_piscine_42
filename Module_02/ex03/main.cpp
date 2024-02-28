#include "Includes/Fixed.hpp"
#include "Includes/Point.hpp"

int main() 
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 10);
	Point	point(9.4, 0.6);
	bool	res;

	
	res = bsp(a, b, c, point);
	std::cout << res << std::endl;

	return 0;
}
