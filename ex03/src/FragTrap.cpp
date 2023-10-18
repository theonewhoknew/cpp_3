#include "../inc/FragTrap.hpp"
#include "../inc/ClapTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap " << _name << " was created!" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called." << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Come on guys, my arm is starting to hurt!" << std::endl;
}