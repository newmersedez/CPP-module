#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() { std::cout << "IMateria destructor" << std::endl; }
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};