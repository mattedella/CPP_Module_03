
#include "ClapTrap.hpp"

int main (void) {

	ClapTrap bob("Bob");

	bob.attack("Bot");
	bob.attack("Bot");
	bob.attack("Bot");
	bob.attack("Bot");
	bob.attack("Bot");
	bob.attack("Bot");
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.beRepaired(1);
	bob.takeDamage(15);
	bob.attack("Bot");
	bob.beRepaired(4);
	bob.takeDamage(5);
	
	return 0;
}
