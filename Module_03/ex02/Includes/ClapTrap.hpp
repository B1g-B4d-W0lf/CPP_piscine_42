#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	public:
// CANON & CONSTRUCTORS
		ClapTrap();
		ClapTrap(std::string naming);
		~ClapTrap();
		ClapTrap(ClapTrap& bis);
		ClapTrap& operator=(ClapTrap& bis);

// ACTIONS
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

// SET & GET
		std::string	getname();
		int	gethp();
		int	getep();
		int	getattp();
		void setname(std::string naming);
		void sethp(int newhp);
		void setep(int newep);
		void setattp(int newattp);

	protected:
		std::string				name;
		unsigned int			hp;
		unsigned int			ep;
		unsigned int			attp;

};

#endif