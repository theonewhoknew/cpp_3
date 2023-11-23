#include "../inc/ScavTrap.hpp"
#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{	
	_name = "default";
	ClapTrap::_name = _name + "_clap_name";
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was created!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ScavTrap(name), FragTrap(name)
{	
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_energyPoints = ScavTrap::_energyPoints;
	_hitPoints = FragTrap::_hitPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " was created!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ScavTrap(copy), FragTrap(copy)
{	
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_energyPoints = copy._energyPoints;
	_hitPoints = copy._hitPoints;
	_attackDamage = copy._attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &instance)
{	
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	ClapTrap::operator=(instance);
	_name = instance._name;
	ClapTrap::_name = instance._name + "_clap_name";
	_hitPoints = instance._hitPoints;
	_energyPoints = instance._energyPoints;
	_attackDamage = instance._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called." << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I'm " << _name << " or " << ClapTrap::_name << ", as you prefer!" << std::endl;
}