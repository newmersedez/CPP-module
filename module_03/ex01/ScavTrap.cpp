#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap " << this->_name << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scavtrap)
	: ClapTrap(scavtrap)
{}

ScavTrap&	ScavTrap::operator=(const ScavTrap& scavtrap)
{
	if (this == &scavtrap)
		return *this;
	this->ClapTrap::operator=(scavtrap);
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destroyed!" << std::endl;
}

void	ScavTrap::guardGate()
{	
	std::cout << this->_name << " have enterred in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout << "ScavTrap " << this->_name
				<< " attacks " << target 
				<< ", causing "<< this->_attack_damage  
				<< " points of damage! " << this->_energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}
