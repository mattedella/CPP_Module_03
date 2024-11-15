
#ifndef CLAPTRAP
# define CLAPTRAP

# include <iostream>

class ClapTrap {

	protected:
		std::string 	_name;
		int				_hitPoint;
		int				_energyPoint;
		int				_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap& trap);

		ClapTrap& operator=(const ClapTrap& trap);

		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		~ClapTrap(void);
};

#endif