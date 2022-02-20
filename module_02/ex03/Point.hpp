#pragma once

#include <iostream>
#include "Fixed.hpp"

class Point
{
private:
	const Fixed _x;
	const Fixed	_y;

public:
	Point();
	Point(float const x, float const y);
	Point(const Point& point);
	Point&	operator=(const Point& point);
	~Point();

	Fixed	getX(void) const;
	Fixed	getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
std::ostream&	operator<<(std::ostream& stream, const Point& point);
