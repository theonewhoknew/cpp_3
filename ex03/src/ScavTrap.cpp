#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " was created!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &copy) : ClapTrap(copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
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

void ScavTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout << "ScavTrap " << _name << " is already dead!" << std::endl;
	else
	{
		_hitPoints -= amount;
		if (_hitPoints < 1)
			std::cout << "ScavTrap " << _name << " took " << amount << " of damage and died!" << std::endl;
		else
			std::cout << "ScavTrap " << _name << " took " << amount << " of damage and has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

void ScavTrap::beRepaired(unsigned int amount)
{	
	if (_hitPoints < 1)
		std::cout << "ScavTrap " << _name << " is dead! It can't repair itself!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ScavTrap " << _name << " is out of energy! It can't repair itself!" << std::endl;
	else
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ScavTrap " << _name << " repaired itself " << amount << " hp, and now has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}