
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	std::cout << "ScavTrap Constructor called\n";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap Constructor called\n";
	_hitPoint = 100;
	_energyPoint = 50;
	_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& trap) : ClapTrap(trap._name) {
	_hitPoint = trap._hitPoint;
	_energyPoint = trap._energyPoint;
	_attackDamage = trap._attackDamage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& trap) {
	if (this != &trap) {
		this->_hitPoint = trap._hitPoint;
		this->_energyPoint = trap._energyPoint;
		this->_attackDamage = trap._attackDamage;
	}

	return *this;
}

void ScavTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "OHHHHH NOOOOOOO!!!!\n";
		return ;
	}
	if (_energyPoint <= 0) 	
		std::cout << "ScavTrap " << _name << " can't attack\n";
	else {
		_energyPoint -= 1;
		std::cout << "ScavTrap " << _name << " attack " << target << " causing " << _attackDamage << " point of damage\n";
	}
}

void ScavTrap::guardGate() {
	if (_hitPoint <= 0) {
		std::cout << "OHHHHH NOOOOOOO!!!!\n";
		return ;
	}
	std::cout << "ScavTrap " << _name << " is in guard mode\n";
}
