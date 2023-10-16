#include "../inc/ClapTrap.hpp"

#include <iostream>

int main( void ) 
{

	ClapTrap John("John");
	ClapTrap Paul("Paul");

	John.takeDamage(5);
	ClapTrap Ringo("Ringo");

	Ringo = John;
	Ringo.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);
	John.attack("Paul");
	Paul.takeDamage(0);

	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);
	Paul.beRepaired(1);

	Paul.takeDamage(20);

	
	Paul.beRepaired(1);
	Paul.attack("John");


	return (0);
}