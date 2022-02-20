#include "Point.hpp"

/* Constructors and destructor */

Point::Point()
	: _x(0), _y(0)
{}

Point::Point(float const x, float const y)
	: _x(x), _y(y)
{}

Point::Point(const Point& point)
{
	const_cast<Fixed&>(this->_x) = point._x;
	const_cast<Fixed&>(this->_y) = point._y;
}

Point&	Point::operator=(const Point& point)
{
	const_cast<Fixed&>(this->_x) = point._x;
	const_cast<Fixed&>(this->_y) = point._y;
	return *this;
}

Point::~Point()
{}

/* Member functions */

Fixed	Point::getX(void) const
{
	return this->_x;
}

Fixed	Point::getY(void) const
{
	return this->_y;
}

/* Other functions */

std::ostream&	operator<<(std::ostream& stream, const Point& point)
{
	stream << "(" << point.getX() << "; " << point.getY() << ")";
	return stream;
}
