
#include "ScavTrap.hpp"

int main(void) {

	ClapTrap bob("Bob");
	ScavTrap bill("Bill");

	bob.attack("Bill");
	bill.takeDamage(0);
	bill.attack("Bob");
	bob.takeDamage(20);
	bob.beRepaired(1);
	bill.guardGate();
	// bill.beRepaired(10);
	bill.takeDamage(100);
	bill.guardGate();

	return 0;
}
