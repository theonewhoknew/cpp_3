#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap()
{	
	_name = "default";
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{	
	_name = name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "ClapTrap " << _name << " was created!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{	
	std::cout << "ClapTrap copy constructor called" << std::endl;
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &instance)
{	
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	_name = instance._name;
	_hitPoints = instance._hitPoints;
	_energyPoints = instance._energyPoints;
	_attackDamage = instance._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

std::string ClapTrap::getName(void)
{
	return(this->_name);
}

void ClapTrap::attack(const std::string& target)
{	
	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is dead! It can't attack!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " is out of energy. It can't attack!" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	return ;	 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is already dead!" << std::endl;
	else
	{
		_hitPoints -= amount;
		if (_hitPoints < 1)
			std::cout << "ClapTrap " << _name << " took " << amount << " of damage and died!" << std::endl;
		else
			std::cout << "ClapTrap " << _name << " took " << amount << " of damage and has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{	
	if (_hitPoints < 1)
		std::cout << "ClapTrap " << _name << " is dead! It can't repair itself!" << std::endl;
	else if (_hitPoints == 10)
		std::cout << "ClapTrap " << _name << " is already full health!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "ClapTrap " << _name << " is out of energy! It can't repair itself!" << std::endl;
	else
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " repaired itself " << amount << " hp, and now has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

