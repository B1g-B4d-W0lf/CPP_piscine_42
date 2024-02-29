#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
// CANON & CONSTRUCTORS
		ScavTrap();
		ScavTrap(std::string naming);
		~ScavTrap();
		ScavTrap(ScavTrap& bis);
		ScavTrap& operator=(ScavTrap& bis);

// ACTIONS
		void attack(const std::string& target);
		void guardGate();


	private:

};

#endif