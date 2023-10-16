#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{


public:
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &instance);
	virtual ~ScavTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();
};

#endif