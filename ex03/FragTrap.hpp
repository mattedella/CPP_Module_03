
#ifndef FRAGTRAP
# define FRAGTRAP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& trap);

		void highFivesGuys(void);
		void attack(const std::string& target);

		~FragTrap(void) {
			std::cout << "FragTrap Destructor called\n";
		};
};

#endif