#pragma once

#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria		*materials[4];
	unsigned int	number_of_materials;

public:
	MateriaSource();
	MateriaSource(const MateriaSource& copy);
	~MateriaSource();

	MateriaSource& operator=(const MateriaSource& rhs);
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const& type);
};
