
#ifndef FRAGTRAP
# define FRAGTRAP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& trap);

		void highFivesGuys(void);
		void attack(const std::string& target);

		~FragTrap(void);
};

#endif