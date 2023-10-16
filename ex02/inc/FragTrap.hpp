#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{


public:
	FragTrap(std::string name);
	FragTrap(FragTrap &copy);
	FragTrap& operator=(const FragTrap &instance);
	virtual ~FragTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};

#endif