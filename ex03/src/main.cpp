#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

#include <iostream>

int main( void ) 
{
	{
		DiamondTrap Diamond;
		Diamond.guardGate();
		Diamond.highFivesGuys();
		Diamond.whoAmI();
		Diamond.attack("Itself");
		Diamond.takeDamage(30);
	}
	{
		DiamondTrap John("John");
/* 		for(int i = 0; i < 101; i++)
			John.attack("The air"); */
	}
	return (0);
}