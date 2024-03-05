#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
// CANON & CONSTRUCTORS
		FragTrap();
		FragTrap(std::string naming);
		~FragTrap();
		FragTrap(FragTrap& bis);
		FragTrap& operator=(FragTrap& bis);

// ACTIONS
		void highFivesGuys(void);

	private:

};

#endif