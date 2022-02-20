#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), FragTrap("Lorphan"), ScavTrap("Lorphan")
{
	this->_name = name;
	FragTrap::_hit_points = 100;
	ScavTrap::_energy_points = 30;
	FragTrap::_attack_damage = 30;

	std::cout << "DiamondTrap " << this->_name << " created!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondtrap)
	: ClapTrap(diamondtrap._name + "_clap_name"),
	FragTrap(diamondtrap._name), ScavTrap(diamondtrap._name)
{
	this->_name = diamondtrap._name;
    this->FragTrap::_hit_points = diamondtrap.FragTrap::_hit_points;
    this->ScavTrap::_energy_points = diamondtrap.ScavTrap::_energy_points;
    this->FragTrap::_attack_damage = diamondtrap.FragTrap::_attack_damage;

	std::cout << "DiamondTrap " << this->_name
			<< " created! (copy operation)" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& diamondtrap)
{
	if (this == &diamondtrap)
		return (*this);
	this->ClapTrap::operator=(diamondtrap);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->_name << " destroyed!" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\nMy name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << "\n" << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}
