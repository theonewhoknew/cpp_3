#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

#include <iostream>

int main( void ) 
{	
	/*TEST*/
	std::cout << "CANONICAL TEST" << std::endl;

	ScavTrap John("John");
	ScavTrap Paul("Paul");

	John.attack(Paul.getName());
	Paul.takeDamage(20);

	ClapTrap Ringo("Ringo");

	Ringo = Paul;

	Ringo.takeDamage(1);

	Paul.guardGate();

	Paul = John;

	Paul.guardGate();

	return (0);
}