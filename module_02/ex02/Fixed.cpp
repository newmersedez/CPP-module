#include "Fixed.hpp"

/* Constructors and destructor */

Fixed::Fixed()
{
	this->_value = 0;
}

Fixed::Fixed(int value)
{
	this->_value = (value << this->_fractional_bits);
}

Fixed::Fixed(float value)
{
	this->_value = roundf(value * (1 << this->_fractional_bits));
}

Fixed::Fixed(const Fixed& obj)
{
	*this = obj;
}

Fixed::~Fixed()
{}

/* Compare pperators */

Fixed&	Fixed::operator=(const Fixed& obj)
{
	this->_value = obj.getRawBits();
	return *this;
}

bool	Fixed::operator>(const Fixed& obj) const
{
	return this->_value > obj._value;
}

bool	Fixed::operator<(const Fixed& obj) const
{
	return this->_value < obj._value;
}

bool	Fixed::operator>=(const Fixed& obj) const
{
	return this->_value >= obj._value;
}

bool	Fixed::operator<=(const Fixed& obj) const
{
	return this->_value <= obj._value;
}

bool	Fixed::operator==(const Fixed& obj) const
{
	return this->_value == obj._value;
}

bool	Fixed::operator!=(const Fixed& obj) const
{
	return this->_value != obj._value;
}

/* Arithmetic operators */

Fixed&	Fixed::operator+=(const Fixed& obj)
{
	this->_value += obj._value;
	return *this;
}

Fixed&	Fixed::operator-=(const Fixed& obj)
{
	this->_value -= obj._value;
	return *this;
}

Fixed&	Fixed::operator*=(const Fixed& obj)
{
	long	copy;

	copy = (long)this->_value;
	copy *= obj._value;
	copy >>= this->_fractional_bits;
	this->_value = (int)copy;
	return (*this);
}

Fixed&	Fixed::operator/=(const Fixed& obj)
{
	long	a;
	long	b;

	a = this->_value << (this->_fractional_bits);
	b = obj._value;
	a /= b;
	this->_value = (int)a;
	return (*this);
}

Fixed	Fixed::operator+(const Fixed& obj) const
{
	Fixed	result(*this);

	return result += obj;
}

Fixed	Fixed::operator-(const Fixed& obj) const
{
	Fixed	result(*this);

	return result -= obj;
}

Fixed	Fixed::operator*(const Fixed& obj) const
{
	Fixed	result(*this);

	return result *= obj;
}

Fixed	Fixed::operator/(const Fixed& obj) const
{
	Fixed	result(*this);

	return result /= obj;
}

Fixed&	Fixed::operator++()
{
	this->_value += 1;
	return *this;
}

Fixed&	Fixed::operator--()
{
	this->_value -= 1;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed	copy(*this);

	this->_value += 1;
	return copy;
}

Fixed	Fixed::operator--(int)
{
	Fixed	copy(*this);

	this->_value += 1;
	return copy;
}


/* Member functions */

int		Fixed::toInt(void) const
{
	return this->_value >> this->_fractional_bits;
}

float	Fixed::toFloat(void) const
{
	return (float)this->_value / (1 << this->_fractional_bits);
}

int     Fixed::getRawBits( void ) const
{
	return this->_value;
}

void    Fixed::setRawBits( int const raw )
{
	this->_value = raw;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b) ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b) ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b) ? a : b;
}

/* Other functions or operators */

std::ostream&	operator<<(std::ostream& stream, const Fixed& obj)
{
	stream << obj.toFloat();
	return stream;
}
