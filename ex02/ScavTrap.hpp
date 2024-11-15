
#ifndef SCAVTRAP
# define SCAVTRAP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& trap);

		ScavTrap& operator=(const ScavTrap& trap);

		void guardGate(void);
		void attack(const std::string& target);

		~ScavTrap(void) {
			std::cout << "ScavTrap Destructor called\n";
		};

};


#endif