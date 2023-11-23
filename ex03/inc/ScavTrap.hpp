#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{

protected:
	int		_energyPoints;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap &copy);
	ScavTrap& operator=(const ScavTrap &instance);
	virtual ~ScavTrap();

	void attack(const std::string& target);

	void guardGate();
};

#endif