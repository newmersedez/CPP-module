#pragma once

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	WrongCat(const WrongCat& cat);
	~WrongCat();

	WrongCat&	operator=(const WrongCat& cat);
	void		makeSound() const;
};
