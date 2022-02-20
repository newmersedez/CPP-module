#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "Animal is created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& animal)
{
	this->type = animal.type;
	std::cout << "Animal is copied." << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal is destroyed." << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& animal)
{
	this->type = animal.type;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "\'None\' animal can`t make sound." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
