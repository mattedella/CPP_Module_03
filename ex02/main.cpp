
#include "FragTrap.hpp"

int main(void) {

	ClapTrap bob("Bob");
	ScavTrap bill("Bill");
	FragTrap jonh("Jonh");
	std::cout << "\n";
	bob.attack("Bill");
	bob.takeDamage(20);
	bob.beRepaired(1);
	std::cout << "\n";
	bill.attack("Bob");
	bill.takeDamage(10);
	bill.guardGate();
	bill.beRepaired(10);
	bill.takeDamage(100);
	bill.guardGate();
	std::cout << "\n";
	jonh.attack("bill");
	jonh.takeDamage(25);
	jonh.highFivesGuys();
	jonh.beRepaired(25);
	jonh.takeDamage(100);
	jonh.highFivesGuys();
	std::cout << "\n";
	return 0;
}
