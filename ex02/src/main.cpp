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

	Paul.beRepaired(10);

	Paul.highFivesGuys();

	for(int i = 0; i < 101; i++)
		Paul.attack("The air");

	FragTrap Ringo(Paul);

	Ringo.attack("The air");

	FragTrap George("George");

	George.attack("The air");

	George = John;

	George.attack("The air");

	return (0);
}