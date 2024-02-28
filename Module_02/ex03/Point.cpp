#include "Includes/Point.hpp"

Point::Point(): x(0), y(0)
{
	return ;
}

Point::Point(const Point& bis): x(bis.getX()), y(bis.getY())
{
	return ;
}

Point::Point(const float a, const float b): x(a), y(b)
{
	return ;
}

Point::~Point()
{
	return;
}

const Point&	Point::operator=(const Point& bis)
{
	return (bis);
}

const Fixed Point::getX() const
{
	return (x);
}

const Fixed Point::getY() const
{
	return (y);
}
