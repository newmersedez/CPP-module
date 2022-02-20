#pragma once

#include <iostream>

class WrongAnimal
{
protected:
	std::string	type;

public:
	WrongAnimal(std::string type = "None");
	WrongAnimal(const WrongAnimal& animal);
	virtual	~WrongAnimal();
	
	WrongAnimal&	operator=(const WrongAnimal& animal);
	void			makeSound() const;
	std::string		getType() const;
};
