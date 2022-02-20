#pragma once

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string	type;

public:
	Animal(std::string type = "None");
	Animal(const Animal& animal);
	virtual ~Animal();

	Animal&			operator=(const Animal& animal);
	std::string		getType() const;
	virtual void	makeSound(void) const = 0;
};
