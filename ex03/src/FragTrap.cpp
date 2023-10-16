#include "../inc/FragTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy)
{	
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &copy)
{
	_name = copy._name;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void FragTrap::attack(const std::string& target)
{	
	if (_hitPoints < 1)
		std::cout << "FragTrap " << _name << " is dead! It can't attack!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "FragTrap " << _name << " is out of energy. It can't attack!" << std::endl;
	else
	{
		_energyPoints -= 1;
		std::cout << "FragTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
	return ;	 
}

void FragTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints < 1)
		std::cout << "FragTrap " << _name << " is already dead!" << std::endl;
	else
	{
		_hitPoints -= amount;
		if (_hitPoints < 1)
			std::cout << "FragTrap " << _name << " took " << amount << " of damage and died!" << std::endl;
		else
			std::cout << "FragTrap " << _name << " took " << amount << " of damage and has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

void FragTrap::beRepaired(unsigned int amount)
{	
	if (_hitPoints < 1)
		std::cout << "FragTrap " << _name << " is dead! It can't repair itself!" << std::endl;
	else if (_energyPoints < 1)
		std::cout << "FragTrap " << _name << " is out of energy! It can't repair itself!" << std::endl;
	else
	{
		_energyPoints -= 1;
		_hitPoints += amount;
		std::cout << "FragTrap " << _name << " repaired itself " << amount << " hp, and now has " << _hitPoints << " hp remaining!" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Come on guys, my arm is starting to hurt!" << std::endl;
}