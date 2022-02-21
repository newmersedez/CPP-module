#pragma once

#include <string>
#include <iostream>
#include <sstream>

class Converter
{
public:
	Converter();
	Converter(const Converter& copy);
	~Converter();
	
	Converter& operator=(const Converter& copy);

	char convertToChar(std::string parameter) const;
	int convertToInt(std::string parameter) const;
	float convertToFloat(std::string parameter) const;
	double convertToDouble(std::string parameter) const;
};
