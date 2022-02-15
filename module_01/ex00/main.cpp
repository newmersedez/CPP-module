#include <iostream>
#include "Zombie.hpp"

int main() 
{
    Zombie  *zombie = new Zombie("Pupsi4");
    zombie->announce();
    delete zombie;

    zombie = newZombie("Arthas");
    zombie->announce();
    delete zombie;

    randomChump("lalka");
    return 0;
}