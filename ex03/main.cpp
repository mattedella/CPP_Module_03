
#include "DiamondTrap.hpp"

int main(void) {

	DiamondTrap dt("Bot");
	std::cout << "\n";
	dt.attack("dio");
	dt.whoAmI();
	dt.takeDamage(10);
	dt.guardGate();
	dt.highFivesGuys();
	std::cout << "\n";
	return 0;
}
