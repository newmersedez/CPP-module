#include "DiamondTrap.hpp"

int		main()
{
	DiamondTrap	diamond1("44444444444444444");

	diamond1.takeDamage(50);
	diamond1.beRepaired(20);

	DiamondTrap diamond2 = diamond1;
	DiamondTrap diamond3;

	diamond2.beRepaired(20);
	diamond1.attack("diamond 2");
	diamond1.whoAmI();
	diamond2.whoAmI();
	diamond3.whoAmI();
	return 0;
}