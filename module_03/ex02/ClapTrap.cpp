#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	std::cout << "ClapTrap " << this->_name << " created (copy operation)!" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& claptrap)
{
	this->_name = claptrap._name;
	this->_hit_points = claptrap._hit_points;
	this->_energy_points = claptrap._energy_points;
	this->_attack_damage = claptrap._attack_damage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		std::cout << "ClapTrap " << this->_name
				<< " attacks " << target 
				<< ", causing "<< this->_attack_damage  
				<< " points of damage! " << this->_energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_hit_points -= amount;
	std::cout << "ClapTrap " << this->_name 
			<< " recieved " << amount
			<< " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points > 0)
	{
		this->_energy_points--;
		this->_hit_points += amount;
		std::cout << "ClapTrap " << this->_name
				<< " has repaired himself! " << this->_energy_points
				<< " energy points remains." << std::endl;
	}
	else
		std::cout << "Not enough energy points!" << std::endl;
}
