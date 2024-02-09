#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB(void);
		std::string	getName(void);
		void	setWeapon(Weapon& type);
		void	attack(void);

	private:
		Weapon	*thing;
		std::string	name;

};

#endif