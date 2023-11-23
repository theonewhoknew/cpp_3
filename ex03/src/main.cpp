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
		Diamond.takeDamage(30);

		DiamondTrap Diamond_copy(Diamond);

		Diamond_copy.takeDamage(30);

		DiamondTrap assign;

		assign = Diamond_copy;

		assign.takeDamage(10);
	}
/* 	{
		DiamondTrap John("John");
		for(int i = 0; i < 51; i++)
			John.attack("The air");
	} */
	return (0);
}