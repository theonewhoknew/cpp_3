#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

#include <iostream>

int main( void ) 
{	
	/*TESTS*/
	FragTrap John("John");
	FragTrap Paul("Paul");

	John.attack(Paul.getName());
	Paul.takeDamage(30);

	FragTrap Ringo(Paul);

	Ringo.beRepaired(10);

	for(int i = 0; i < 101; i++)
		Ringo.attack("The air");

	return (0);
}