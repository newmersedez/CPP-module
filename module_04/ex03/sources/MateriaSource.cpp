#include "../headers/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	this->number_of_materials = 0;
	for (int i = 0; i < 4; i++)
		this->materials[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& copy)
{
	this->number_of_materials = copy.number_of_materials;
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		this->materials[i] = copy.materials[i]->clone();
	for (unsigned int i = this->number_of_materials; i < 4; i++)
		this->materials[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	std::cout << "Materia destructor" << std::endl;
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		delete this->materials[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs)
{
	this->number_of_materials = rhs.number_of_materials;
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		this->materials[i] = rhs.materials[i]->clone();
	for (unsigned int i = this->number_of_materials; i < 4; i++)
		this->materials[i] = NULL;
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia)
{
	unsigned int i = 0;

	if (this->number_of_materials < 4)
	{
		for (i = 0; i < this->number_of_materials; i++)
		{
			if (this->materials[i]->getType() == materia->getType())
				return;
		}
		if (i < 4)
		{
			this->materials[this->number_of_materials] = materia->clone();
			this->number_of_materials++;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (unsigned int i = 0; i < 4 && this->materials[i]; i++)
	{
		if (this->materials[i]->getType() == type)
			return this->materials[i]->clone();
	}
	return NULL;
}
