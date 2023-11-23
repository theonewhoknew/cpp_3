#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("default")
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called." << std::endl;
}

void ScavTrap::attack(const std::string& target)
{	
	if (_hitPoints < 1)
		std::cout << "ScavTrap " << _name << " is dead! It can't attack!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ScavTrap " << _name << " is out of energy. It can't attack!" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	return ;	 
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}