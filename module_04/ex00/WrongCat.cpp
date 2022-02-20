#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("Cat")
{
	std::cout << "Cat is created." << std::endl;
}

WrongCat::WrongCat(const WrongCat& cat)
	: WrongAnimal(cat)
{
	std::cout << "Cat is copied." << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Cat is deleted." << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cat)
{
	this->WrongAnimal::operator=(cat);
	return *this;
}

void		WrongCat::makeSound() const
{
	std::cout << "Cat says \"Meow\"." << std::endl;
}
