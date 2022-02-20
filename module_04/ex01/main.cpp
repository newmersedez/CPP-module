#include "Dog.hpp"
#include "Cat.hpp"

#define ANIMALS_COUNT 10

int main()
{
	Animal	**array_of_animals = new Animal* [ANIMALS_COUNT];
	
	for (int i = 0; i < ANIMALS_COUNT / 2; i++)
		array_of_animals[i] = new Dog();
	for (int i = ANIMALS_COUNT / 2; i < ANIMALS_COUNT; i++)
		array_of_animals[i] = new Cat();


	for (int i = 0; i < ANIMALS_COUNT / 2; i++)
		delete array_of_animals[i];
	for (int i = ANIMALS_COUNT / 2; i < ANIMALS_COUNT; i++)
		delete array_of_animals[i];
	delete [] array_of_animals;
	return 0;
}
