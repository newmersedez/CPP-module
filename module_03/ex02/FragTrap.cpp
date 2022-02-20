#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap " << this->_name << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& fragtrap)
	: ClapTrap(fragtrap)
{
	std::cout << "FragTrap " << this->_name << " created (copy operation)!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& fragtrap)
{
	if (this == &fragtrap)
		return *this;
	this->ClapTrap::operator=(fragtrap);
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name << " destroyed!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "^_^/" << std::endl;
}
