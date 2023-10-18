#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

private:
	std::string _name;

public:
	DiamondTrap(std::string name);
	virtual ~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();
	
};

#endif