#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{


public:
	FragTrap(std::string name);
	virtual ~FragTrap();

	void highFivesGuys(void);
};

#endif