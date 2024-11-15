
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	ClapTrap::_name += "_clap_name";
	_name = "default";
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {
	_name = name;
	_hitPoint = FragTrap::_hitPoint;
	_energyPoint = ScavTrap::_energyPoint;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap Constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap& trap) : ClapTrap(trap._name + "_clap_name"), ScavTrap(trap._name), FragTrap(trap._name) {
	_name = trap._name;
	_hitPoint = trap._hitPoint;
	_energyPoint = trap._energyPoint;
	_attackDamage = trap._attackDamage;
	std::cout << "DiamondTrap Constructor called\n";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& trap) {
	if (this != &trap) {
		_hitPoint = trap._hitPoint;
		_energyPoint = trap._energyPoint;
		_attackDamage = trap._attackDamage;
	}

	return *this;
}

void DiamondTrap::whoAmI(void) {
	std::cout << "Hi my name is " << _name
		<< " but my real name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called\n";
}