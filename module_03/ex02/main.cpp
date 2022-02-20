#include "FragTrap.hpp"

int		main()
{
	FragTrap	fragtrap("Player");

	fragtrap.attack("Kane");
	fragtrap.takeDamage(10);
	fragtrap.beRepaired(10);
	FragTrap fragtrap2 = fragtrap;
	fragtrap = fragtrap2;
	fragtrap.attack("lolich");
	fragtrap2.highFivesGuys();
}