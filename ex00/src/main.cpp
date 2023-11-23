#include "../inc/ClapTrap.hpp"

#include <iostream>

int main( void ) 
{	
	/*CANONICAL TESTS*/

{	
	std::cout << "CANONICAL TEST" << std::endl << std::endl;

	ClapTrap default_claptrap;
	ClapTrap John("John");

	default_claptrap.attack(John.getName());
	John.takeDamage(0);

	John.takeDamage(1);

	ClapTrap John_copy(John);

	John_copy.takeDamage(0);

	ClapTrap Ringo("Ringo");

	Ringo.takeDamage(0);

	Ringo = John;

	Ringo.takeDamage(0);

}
	std::cout << std::endl;
{

	/*ENERGY TESTS*/
	std::cout << "ENERGY TEST" << std::endl << std::endl;
	ClapTrap John("John");
	ClapTrap Paul("Paul");

	John.beRepaired(1);
	for (int i = 0; i < 11; i++)
		John.attack(Paul.getName());

	for (int i = 0; i < 20; i++)
	{	
		Paul.takeDamage(1);
		Paul.beRepaired(1);
	}
	Paul.attack(John.getName());
	Paul.takeDamage(1);

}
	std::cout << std::endl;

	return (0);
}