#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"

#include <iostream>

int main( void ) 
{
	ClapTrap Y("Y");
	ScavTrap X("X");
	FragTrap Z("Z");

	FragTrap A(Z);

	A.takeDamage(99);
	A.attack("Z");
	Z.takeDamage(30);

	X.attack("Y");
	Y.takeDamage(20);

	return (0);
}