#include "Dog.hpp"

Dog::Dog()
	: Animal("Dog")
{
	std::cout << "Dog is created." << std::endl;
}

Dog::Dog(const Dog& dog)
	: Animal(dog)
{
	std::cout << "Dog copied." << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog is destroyed." << std::endl;
}

Dog& Dog::operator=(const Dog& dog)
{
	this->Animal::operator=(dog);
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Dog says \"Woof\"." << std::endl;
}
