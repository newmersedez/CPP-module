#pragma once

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& fragtrap);
	FragTrap& operator=(const FragTrap& fragtrap);
	~FragTrap();

	void	highFivesGuys(void);
};