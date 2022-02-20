#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap 
{
public:
	ScavTrap(std::string name = "lorphan");
	ScavTrap(const ScavTrap& scavtrap);
	ScavTrap& operator=(const ScavTrap& scavtrap);
	~ScavTrap();

	void	guardGate();
	void	attack(const std::string& target);
};
