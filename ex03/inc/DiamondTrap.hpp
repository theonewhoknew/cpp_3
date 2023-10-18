#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap &copy);
	DiamondTrap& operator=(const DiamondTrap &instance);
	virtual ~DiamondTrap();

	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif