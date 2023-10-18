#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

#include <iostream>

int main( void ) 
{
	DiamondTrap A("Diamond");
	A.guardGate();
	A.highFivesGuys();
	A.whoAmI();
	A.attack("You");
	return (0);
}