#include "Zombie.hpp"

int main()
{
    Zombie  *zombies = zombieHorde(5, "Alex");

    if (zombies)
    {
        for (int i = 0; i < 5; i++)
            zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}
