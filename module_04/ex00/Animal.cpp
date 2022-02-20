#include "Animal.hpp"

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal is created." << std::endl;
}

Animal::Animal(const Animal& animal)
{
	this->type = animal.type;
	std::cout << "Animal is copied." << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal is destroyed." << std::endl;
}

Animal&	Animal::operator=(const Animal& animal)
{
	this->type = animal.type;
	return *this;
}

std::string Animal::getType() const
{
	return this->type;
}

void Animal::makeSound(void) const
{
	std::cout << "\'None\' animal can`t make sound." << std::endl;
}
