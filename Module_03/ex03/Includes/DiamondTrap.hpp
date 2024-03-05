#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
// CANON & CONSTRUCTORS
		DiamondTrap();
		DiamondTrap(std::string naming);
		~DiamondTrap();
		DiamondTrap(DiamondTrap& bis);
		DiamondTrap& operator=(DiamondTrap& bis);

// ACTIONS
		void whoAmI();


	private:
	std::string name;

};

#endif