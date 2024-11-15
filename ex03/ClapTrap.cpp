
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default"), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0) {
	std::cout << "ClapTrap Constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap& trap) : _name(trap._name), _hitPoint(trap._hitPoint), _energyPoint(trap._energyPoint), _attackDamage(trap._attackDamage) {
}

ClapTrap& ClapTrap::operator=(const ClapTrap& trap) {
	if (this != &trap) {
		_name = trap._name;
		_hitPoint = trap._hitPoint;
		_energyPoint = trap._energyPoint;
		_attackDamage = trap._attackDamage;
	}

	return *this;
}

void ClapTrap::attack(const std::string& target) {
	if (_hitPoint <= 0) {
		std::cout << "STOP HE'S ALREADY DEAD!!\n";
		return ;
	}
	if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " can't attack. RUN U FOOL!\n";
	else {
		_energyPoint -= 1;
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< " causing " << _attackDamage << " point of damage\n";
	}
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (_hitPoint <= 0)
		std::cout << "STOP HE'S ALREADY DEAD!!\n";
	else {
		_hitPoint -= amount;
		std::cout << "ClapTrap " << _name << " takes "
			<< amount << " point of damage. OUCH!\n";
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (_hitPoint <= 0) {
		std::cout << "STOP HE'S ALREADY DEAD!!\n";
		return ;
	}
	if (_energyPoint <= 0)
		std::cout << "ClapTrap " << _name << " can't repair\n";
	else {
		_energyPoint -= 1;
		_hitPoint += amount;
		std::cout << "ClapTrap " << _name << " gets "
			<< amount << " health point back\n";
	}
}


ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap Destructor called\n";
}
