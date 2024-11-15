
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Constructor called\n";
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	_hitPoint = 100;
	_energyPoint = 100;
	_attackDamage = 30;
	std::cout << "FragTrap Constructor called\n";
}

FragTrap::FragTrap(const FragTrap& trap) : ClapTrap(trap._name) {
	_hitPoint = trap._hitPoint;
	_energyPoint = trap._energyPoint;
	_attackDamage = trap._attackDamage;
}

void FragTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "K.O.\n";
		return ;
	}
	if (_energyPoint <= 0)
		std::cout << "FragTrap " << _name << " can't attack\n";
	else {
		_energyPoint -= 1;
		std::cout << "FragTrap " << _name << " attack " << target
			<< " causing " << _attackDamage << " point of damage\n";
	}
}

void FragTrap::highFivesGuys(void) {
	if (_hitPoint <= 0) {
		std::cout << "K.O.\n";
		return ;
	}
	std::cout << "FragTrap is asking for a high five\n";
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap Destructor called\n";
}