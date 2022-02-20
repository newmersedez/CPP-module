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
    Fixed&	operator=(const Fixed& obj);
	~Fixed();
    
	int     getRawBits( void ) const;
    void    setRawBits( int const raw );
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& stream, const Fixed& obj);
