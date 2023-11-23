#include "../inc/FragTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default")
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::FragTrap(FragTrap &copy) : ClapTrap(copy._name)
{	
	std::cout << "FragTrap copy constructor called" << std::endl;
	_hitPoints = copy._hitPoints;
	_energyPoints = copy._energyPoints;
	_attackDamage = copy._attackDamage;
}

FragTrap& FragTrap::operator=(const FragTrap &instance)
{	
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	_name = instance._name;
	_hitPoints = instance._hitPoints;
	_energyPoints = instance._energyPoints;
	_attackDamage = instance._attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Come on guys, my arm is starting to hurt!" << std::endl;
}