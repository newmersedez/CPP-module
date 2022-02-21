#include "Converter.hpp"

Converter::Converter()
{}

Converter::Converter(const Converter& copy)
{
	(void)copy;
}

Converter::~Converter()
{}

Converter& Converter::operator=(const Converter& copy)
{
	(void)copy;
	return *this;
} 

char Converter::convertToChar(std::string parameter) const
{
	(void)parameter;
	return 0;
}

int Converter::convertToInt(std::string parameter) const
{
	(void)parameter;
	return 0;
}

float Converter::convertToFloat(std::string parameter) const
{
	(void)parameter;
	return 0;
}

double Converter::convertToDouble(std::string parameter) const
{
	(void)parameter;
	return 0;
}
