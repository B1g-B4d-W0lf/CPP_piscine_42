#include "Includes/Point.hpp"

float	area_calcul(Point a, Point b, Point c)
{
	float	area;

	//Area A = [ x1(y2 – y3) + x2(y3 – y1) + x3(y1-y2)]/2

	area = ( (a.getX().toFloat() * (b.getY().toFloat() - c.getY().toFloat())) +
				(b.getX().toFloat() * (c.getY().toFloat() - a.getY().toFloat())) +
				(c.getX().toFloat() * (a.getY().toFloat() - b.getY().toFloat())) ) / 2;

	if (area >= 0)
		return (area);
	else 
		return (area * -1);
}

bool bsp(Point a, Point b, Point c, Point point)
{
	float 	ar0, ar1, ar2, ar3;
	bool	res = false;

	ar0 = area_calcul(a, b, c);
	ar1 = area_calcul(point, a, b);
	ar2 = area_calcul(point, b, c);
	ar3 = area_calcul(point, a, c);

	if (ar1 == 0 || ar2 == 0 || ar3 == 0)
		res = false;
	else if (ar1 + ar2 + ar3 == ar0)
		res = true;
	return (res);
}
