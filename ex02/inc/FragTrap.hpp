#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{


public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	FragTrap& operator=(const FragTrap &instance);
	virtual ~FragTrap();

	void highFivesGuys(void);
};

#endif