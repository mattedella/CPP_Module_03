#ifndef DIAMONDTRAP
# define DIAMONDTRAP

# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string _name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(const std::string& name);
		DiamondTrap(const DiamondTrap& trap);

		DiamondTrap& operator=(const DiamondTrap& trap);

		void whoAmI();
		void attack(const std::string& target);

		~DiamondTrap();
};


#endif