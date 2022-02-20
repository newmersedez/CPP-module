#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* i = new Cat();
	const Animal* j = new Dog();

	std::cout << "Cat type: " << i->getType() << " " << std::endl;
	std::cout << "Dog type: " << j->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	std::cout << "\n\n";

	const WrongAnimal* wrongmeta = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	wrongcat->makeSound();
	wrongmeta->makeSound();

	delete i;
	delete j;
	delete meta;
	delete wrongcat;
	delete wrongmeta;
	return 0;
}
