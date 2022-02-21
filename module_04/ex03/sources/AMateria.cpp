#include "../headers/AMateria.hpp"
#include "../headers/Character.hpp"

AMateria::AMateria(std::string const& type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	this->type = copy.type;
}

AMateria::~AMateria()
{}

AMateria& AMateria::operator=(const AMateria& rhs)
{
	if (this == &rhs)
		return (*this);
	this->type = rhs.type;
	return *this;
}

std::string const& AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter& target)
{
	if (this->type == "ice")
	{
		std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	}
	else if (this->type == "cure")
	{
		std::cout << "* heals "<< target.getName() << "’s wounds *\n";
	}
}