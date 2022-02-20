#pragma once

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string	_name;

public:
	DiamondTrap(std::string name = "lorphan");
	DiamondTrap(const DiamondTrap& diamondtrap);
	DiamondTrap& operator=(const DiamondTrap& diamondtrap);
	~DiamondTrap();
	
	void	whoAmI();
	void    attack(const std::string& target);
};
