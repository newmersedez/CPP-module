#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created." << std::endl;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	std::cout << "Brain is copied." << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain is deleted." << std::endl;
}

Brain& Brain::operator=(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->ideas[i] = brain.ideas[i];
	return *this;
}
