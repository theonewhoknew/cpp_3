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

DiamondTrap::DiamondTrap(DiamondTrap &copy) : ClapTrap(copy._name), ScavTrap(copy._name), FragTrap(copy._name)
{	
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	ClapTrap::_name = copy._name + "_clap_name";
	_energyPoints = copy.ScavTrap::_energyPoints;
	_hitPoints = copy.FragTrap::_hitPoints;
	_attackDamage = copy.FragTrap::_attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &instance)
{	
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	_name = instance._name;
	ClapTrap::_name = instance._name + "_clap_name";
	_hitPoints = instance.FragTrap::_hitPoints;
	_energyPoints = instance.ScavTrap::_energyPoints;
	_attackDamage = instance.FragTrap::_attackDamage;
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