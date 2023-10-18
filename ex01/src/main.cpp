#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"

#include <iostream>

int main( void ) 
{
	int i = 0;
	ClapTrap Y("Y");
	ScavTrap X("X");
	ScavTrap Xcopy(X);

	X.guardGate();

	X.takeDamage(5);
	Y.takeDamage(5);
	Xcopy.takeDamage(5);
	while (i != 50)
	{
		X.attack("Y");
		i++;
	}
	X.attack("Y");
	Y.takeDamage(20);

	return (0);
}