#include "../headers/MateriaSource.hpp"
#include "../headers/Character.hpp"
#include "../headers/Ice.hpp"
#include "../headers/Cure.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();

	//течет
	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");
	AMateria* tmp;
	(void)tmp;
	
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	ICharacter* bob = new Character("bob");

	// течет	
	// me->use(0, *bob);
	// me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	delete tmp;
	return 0;
}