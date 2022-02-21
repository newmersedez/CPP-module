#include "../headers/Character.hpp"

Character::Character(std::string name)
{
	this->name = name;
	this->number_of_materials = 0;
	for (int i = 0; i < 4; i++)
		this->materials[i] = NULL;
}

Character::Character(const Character& copy)
{
	this->name = copy.name;
	this->number_of_materials = copy.number_of_materials;
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		this->materials[i] = copy.materials[i]->clone();
	for (unsigned int i = this->number_of_materials; i < 4; i++)
		this->materials[i] = NULL;
}

Character::~Character()
{
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		delete this->materials[i];
}

Character& Character::operator=(const Character& rhs)
{
	if (this == &rhs)
		return *this;
	this->name = rhs.name;
	this->number_of_materials = rhs.number_of_materials;
	for (unsigned int i = 0; i < this->number_of_materials; i++)
		this->materials[i] = this->materials[i]->clone();
	for (unsigned int i = this->number_of_materials; i < 4; i++)
		this->materials[i] = NULL;
	return *this;
}

std::string const& Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria* m)
{
	if (this->number_of_materials < 4)
	{
		this->materials[number_of_materials] = m;
		this->number_of_materials++;
	}
}

void Character::unequip(int idx)
{
	for (unsigned int i = idx; i < this->number_of_materials - 1; i++)
		this->materials[i] = this->materials[i + 1];
	if (idx < (int)this->number_of_materials)
	{
		this->materials[this->number_of_materials - 1] = NULL;
		this->number_of_materials--;
	}
}

void Character::use(int idx, ICharacter& target)
{
	if (idx >= (int)this->number_of_materials)
		return ;
	
	this->materials[idx]->use(target);
}
