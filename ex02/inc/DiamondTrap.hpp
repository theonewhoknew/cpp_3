#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ClapTrap, public ScavTrap, public FragTrap
{

private:
	std::string _name;
	ClapTrap::_name;
	FragTrap::_hitPoints;
	ScavTrap::_energyPoints;
	FragTrap::_attackDamage;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap& operator=(const DiamondTrap &instance);
	virtual ~DiamondTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif