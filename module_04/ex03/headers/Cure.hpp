#pragma once

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& copy);
	~Cure();

	Cure& operator=(const Cure& rhs);
	AMateria *clone() const;
};