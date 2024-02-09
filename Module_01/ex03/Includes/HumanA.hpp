#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& type);
		~HumanA(void);
		std::string	getName(void);
		void		attack(void);

	private:
		Weapon&	thing;
		std::string	name;
};

#endif