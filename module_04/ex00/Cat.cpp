#include "Cat.hpp"

Cat::Cat()
	: Animal("Cat")
{
	std::cout << "Cat is created." << std::endl;
}

Cat::Cat(const Cat& cat)
	: Animal(cat)
{
	std::cout << "Cat copied." << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat is destroyed." << std::endl;
}

Cat& Cat::operator=(const Cat& cat)
{
	this->Animal::operator=(cat);
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat says \"Meow\"." << std::endl;
}
