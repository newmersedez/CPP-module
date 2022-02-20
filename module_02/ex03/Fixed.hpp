#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int              _value;
    static const int _fractional_bits = 8;

public:
    Fixed();
	Fixed(int value);
	Fixed(float value);
    Fixed(const Fixed& obj);
	~Fixed();
    
	Fixed&	operator=(const Fixed& obj);
	bool	operator>(const Fixed& obj) const;
	bool	operator<(const Fixed& obj) const;
	bool	operator>=(const Fixed& obj) const;
	bool	operator<=(const Fixed& obj) const;
	bool	operator==(const Fixed& obj) const;
	bool	operator!=(const Fixed& obj) const;

	Fixed&	operator+=(const Fixed& obj);
	Fixed&	operator-=(const Fixed& obj);
	Fixed&	operator*=(const Fixed& obj);
	Fixed&	operator/=(const Fixed& obj);

	Fixed	operator+(const Fixed& obj) const;
	Fixed	operator-(const Fixed& obj) const;
	Fixed	operator*(const Fixed& obj) const;
	Fixed	operator/(const Fixed& obj) const;

	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	int		toInt(void) const;
	float	toFloat(void) const;
	int     getRawBits( void ) const;
    void    setRawBits( int const raw );
	
	static Fixed&	min(Fixed& a, Fixed& b);
	static Fixed&	max(Fixed& a, Fixed& b);
	static const Fixed&	min(const Fixed& a, const Fixed& b);
	static const Fixed&	max(const Fixed& a, const Fixed& b);
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& obj);
