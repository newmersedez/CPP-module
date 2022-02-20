#include "ScavTrap.hpp"

int		main()
{
	ScavTrap	scavtrap("hahasich");

	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.attack("lalka");
	scavtrap.takeDamage(7);
	scavtrap.beRepaired(7);
	scavtrap.guardGate();
}